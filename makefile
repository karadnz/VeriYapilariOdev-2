all: build run

build:
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include/ -o ./lib/Hucre.o -c ./src/Hucre.cpp
	g++ -I ./include/ -o ./lib/Doku.o -c ./src/Doku.cpp


	g++ -I ./include/ -o ./bin/main ./lib/Queue.o ./lib/Radix.o ./lib/Hucre.o ./lib/Doku.o  ./src/main.cpp

run:
	./bin/main