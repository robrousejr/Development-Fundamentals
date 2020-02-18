CC = gcc
CFLAGS  = -g -Wall

# List of .cpp files to run
cpp = isunique.cpp
name = isunique

# Compile and link .o into an exectutable


compile:
	g++ -c $(cpp)
	g++ -o $(name) $(name).o

all: compile run

run: 
	./$(name)

clean: 
	rm -rf $(name) $(name).o