all: build run

build:
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp


	g++ -I ./include/ -o ./bin/main ./lib/Queue.o ./lib/Radix.o ./src/main.cpp

run:
	./bin/main