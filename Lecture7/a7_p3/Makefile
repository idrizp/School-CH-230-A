# Define the default call
all: main

# Calls build and deleteofiles, this will give us only the output(main) in a folder called output
main: build
	rm -rf output/
	mkdir output
	mv *.o output
	mv main output/

# Builds the main executable out of the implementation and the program file
build: linked_list.o use_linked_list.o
	gcc -Wall -o main linked_list.o use_linked_list.o
	
# Turns the linked list header and linked list class file into an object 
linked_list.o: linked_list.h linked_list.c
	gcc -Wall -c linked_list.c

# Turns the linked list header and the main program file into an object 
use_linked_list.o: linked_list.h use_linked_list.c
	gcc -Wall -c use_linked_list.c

# Only creates the object files	
compileonly: linked_list.o use_linked_list.o

# Deletes the object files
deleteofiles:
	rm -f output/*.o
	
# Deletes the executable
deleteexec:
	rm -f output/main	

# Deletes both the executable and the object files and the output folder
deleteall: deleteexec deleteofiles
	rm -rf output/
