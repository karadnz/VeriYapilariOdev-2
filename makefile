all: build run

build:
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include/ -o ./lib/Hucre.o -c ./src/Hucre.cpp
	g++ -I ./include/ -o ./lib/Doku.o -c ./src/Doku.cpp

	g++ -I ./include/ -o ./lib/BSTNode.o -c ./src/BSTNode.cpp
	g++ -I ./include/ -o ./lib/BST.o -c ./src/BST.cpp
	

	g++ -I ./include/ -o ./lib/Organ.o -c ./src/Organ.cpp
	g++ -I ./include/ -o ./lib/Sistem.o -c ./src/Sistem.cpp
	g++ -I ./include/ -o ./lib/Organizma.o -c ./src/Organizma.cpp


	g++ -I ./include/ -o ./bin/main ./lib/Queue.o ./lib/Radix.o ./lib/Hucre.o ./lib/Doku.o ./lib/BST.o ./lib/BSTNode.o ./lib/Organ.o ./lib/Sistem.o ./lib/Organizma.o ./src/main.cpp

run:
	./bin/main

minimal:
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include/ -o ./lib/Hucre.o -c ./src/Hucre.cpp
	g++ -I ./include/ -o ./lib/Doku.o -c ./src/Doku.cpp

	g++ -I ./include/ -o ./bin/main ./lib/Queue.o ./lib/Radix.o ./lib/Hucre.o ./lib/Doku.o ./src/main.cpp