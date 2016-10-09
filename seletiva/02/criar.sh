for i in "$@"
do
	cp Template.cpp "$i".cpp
	touch "$i".{in,txt}
done
