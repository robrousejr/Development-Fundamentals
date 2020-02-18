CC = gcc
CFLAGS  = -g -Wall

# List of .cpp files to run
cpp = hashtable.cpp
name = hashtable

# Compile and link .o into an exectutable
all:
	g++ -c $(cpp)
	g++ -o $(name) hashtable.o

run: all
	./hashtable
clean: 
	rm -rf $(name) $(name).o