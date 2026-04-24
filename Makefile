dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage

prepare:
	rm -r build
	mkdir build
