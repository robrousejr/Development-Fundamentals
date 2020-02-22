CC = gcc
CFLAGS  = -g -Wall

# List of .cpp files to run
cpp = zeromatrix.cpp
name = zeromatrix

# List of .cpp files for tests to run
testcpp = test.cpp
testname = test

# Compile and link .o into an exectutable

compile:
	g++ -c $(cpp)
	g++ -o $(name) $(name).o
	g++ -c $(testcpp)
	g++ -o $(testname) $(testname).o

compilemain: 
	g++ -c $(cpp)
	g++ -o $(name) $(name).o

compiletest:
	g++ -c $(testcpp)
	g++ -o $(testname) $(testname).o

run: 
	./$(name)

runtests:
	./$(testname)

clean: 
	rm -rf $(name) $(testname) $(name).o $(testname).o *.stackdump

all: compile run runtests