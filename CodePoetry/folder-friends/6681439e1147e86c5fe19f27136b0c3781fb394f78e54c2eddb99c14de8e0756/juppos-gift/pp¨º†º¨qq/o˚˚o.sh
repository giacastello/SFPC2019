chars="𖼖𝑳𑢣L𝖫𝗟ℒ𝓛Ꮮ𐔦𝔏𐐛𝘓𝙇ᒪⅬ𝈪𝐋𝐿𝕃𑢲𝕷𝙻"

while :; do
  for (( i=0; i<${#chars}; i++ )); do
    sleep 0.1
    echo -en "${chars:$i:1} " "\r"
  done
done
