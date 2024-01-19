# STACKS AND QUEUES:
	Stacks follow LIFO, last In First Out-> e.g undo command in word
	Queues follow FIFO First In First Out-> e.g how a cpu runs its programms

## A SIMPLE MONTY BYTECODE INTERPRETER:
This program reads and executed the content of a *Monty* bytecode.
It reads each bytecode instruction, interprets it and executes the correspoind operation.

### Monty bytecode
This are a set of instructions that can be executed by the interpreter. < .m> extension.
There is not more than one instruction per line.
		:push 5
		push 6
		pall
		push   7
There can be any number of spaces before or after the opcode and its argument:
		The above represents function to add to a stack 'push', print all contents 'pall'


### Flow of the program
Usage: ./monty <file>
	_monty.c - the main function: it opens the file in read mode
			Reads line by line and calls functions depending on the first opcode read
	push_code - the function handles adding to stack
	pall_code - prints all elements in the stack
	pop - removes from the top most
	pint - prints the top most element
	{add, sub, mul, div, mod) - handle arithmetic operations
	nop - does nothing: think of a comment during execution
	to_char - converts top most element to ASCII value e.g 65 = A
	to_str - forms a string from all values other than 0 that are in ASCII

Usage in < .m> monty bytecode file
	push 5 - add 5 to stack
	pall - print all
	add - add

	!Checkout the instructions in commands.c
	!Be sure to go through the header files as well {monty.h, Commands.h}
	!the accompanied < 00.m > file when run with Monty interpreter:

	/**
	*
	┌──(vn-vision㉿Alx)-[~/ALX/monty]
	└─$ ./monty 00.m
	2
	1
	3
	5
	4
	3

  	*/
