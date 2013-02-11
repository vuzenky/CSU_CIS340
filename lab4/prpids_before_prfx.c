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

int main(void) 
{
	printf("PID = %d\n", getpid());

	printf("PPID = %d\n", getppid());

	exit(EXIT_SUCCESS);
}
