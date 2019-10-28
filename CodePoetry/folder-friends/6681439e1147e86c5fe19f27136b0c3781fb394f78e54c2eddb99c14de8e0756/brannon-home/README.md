Welcome to the weird wonderful world of words! 
The files and folders in here have been randomly generated in a strange unix-y way...

There are two special files in unix file systems that are being used in this poem:

* /dev/urandom - A source of pseudo random bytes
* /usr/share/dict/words - A list of ~100,000 english words (who put these here?!)

The files in `brannon-home` have been created by `cat`ing `/dev/urandom/` and seeing if any of the cosmically random bytes happen to be english words. If so, it creates a file in `brannon-home` with that name...

For instance, if the stars align and the word `forrest` appears, it will be saved to `brannon-home/f/o/r/r/e/s/t/forrest.txt`.

Welcome home! You can learn more at `script.js`.
