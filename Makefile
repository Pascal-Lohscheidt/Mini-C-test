SRC = $(wildcard *.c)
CC=gcc
CFLAGS=-I.

all: build run

build:
	@echo "Compile Program <3"
	$(CC) -o newProgramm $(SRC)
run:
	@echo "Exectue Compiled Program"
	
	./newProgramm