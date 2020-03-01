CC = gcc
CFLAGS  = -g -Wall

# List of .cpp files to run
cpp = stackmin.cpp
name = stackmin

# Compile and link .o into an exectutable

compilemain: 
	g++ -c $(cpp)
	g++ -o $(name) $(name).o

run: 
	./$(name)

clean: 
	rm -rf $(name) $(name).o *.stackdump

all: compilemain run