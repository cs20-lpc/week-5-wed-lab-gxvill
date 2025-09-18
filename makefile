all: build, run

build:
	g++ Ackermann.cpp -o out
	
run:
	./out
