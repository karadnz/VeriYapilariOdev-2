all: build run

build:
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp


	g++ -I ./include/ -o ./bin/main ./lib/Queue.o ./src/main.cpp

run:
	./bin/main