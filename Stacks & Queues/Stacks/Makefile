CC = gcc
CFLAGS  = -g -Wall

# List of .cpp files to run
cpp = stack.cpp
name = stack

# Compile and link .o into an exectutable
all:
	g++ -c $(cpp)
	g++ -o $(name) $(name).o

run: all
	./$(name)
clean: 
	rm -rf $(name) $(name).o *.stackdump