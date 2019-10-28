const fs = require('fs')
const crypto = require('crypto')

const found = {}
const words = {}
const lines = fs.readFileSync('/usr/share/dict/words').toString().split('\n')
lines.forEach(l => words[l] = true)

while (true) {
    const bytes = crypto.randomBytes(256).toString('ascii').toLowerCase()
    let i = 0;
    for (let windowSize = 4; windowSize < 10; windowSize++) {
        const candidate = bytes.substring(i, i + windowSize)
        if (words.hasOwnProperty(candidate)) {
            const word = candidate
            if (!found.hasOwnProperty(word.length)) found[word.length] = {}
            //  a new word has been found
            if (!found[word.length].hasOwnProperty(word)) {
                found[word.length][word] = true
                const path = 'brannon-home/' + word.split('').join('/')
                fs.mkdirSync(path, { recursive: true })
                fs.writeFileSync(`${path}/${word}.txt`, word)
                console.log(`${path}/${word}.txt`)
            }   
        }
        i = (i + 1) % 256
    }
}
