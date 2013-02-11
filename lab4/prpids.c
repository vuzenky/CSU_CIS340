/*
 * Assignment: Lab 4
 *
 * Author: William Wingler
 * Student ID: 2565194
 *
 * CIS 340/540
 *
 * Description: This program prints the process id of the current program and its parent's process id.
 */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

// Here we have a function prototype
int prfx();

// In the main method, we refer to the prototyped function
int main(void) 
{
	// Since prfx is forward referenced, it will call the code below main.
	prfx();
}

// Here is the function referenced by the prototype. This is the same code as the original program without prfx.
int prfx() 
{
	printf("PID = %d\n", getpid());

	printf("PPID = %d\n", getppid());

	exit(EXIT_SUCCESS);
}
