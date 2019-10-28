echo would you type what you think about sfpc?
read input

echo Thank you!
echo Is it okay to share your answer in this folder anonymously?
echo "(yes/no)"
read yn

if [ $yn = "yes" ]; then
echo "$input" >> what-we-think.txt
fi

echo thank you again!
echo "you can see other parson's answer as well in what-we-think.txt in the same folder."
say Please go to the next sight.
