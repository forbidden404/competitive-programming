make $1 && cat $1.in | ./$1 > $1.out && diff $1.out $1.txt
