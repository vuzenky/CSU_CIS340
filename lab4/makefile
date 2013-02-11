#
# Simple Make file
#
# Author: William Wingler
# Student ID: 2565194
#
# CSU CIS 340/540
#

CC = /usr/bin/cc
GCC = /bin/gcc
RM = /bin/rm
TAR = /usr/bin/tar
PROG = prpids
SRCDIR = $(PWD)
DISTDIR = $(PWD)

.SUFFIXES: 
.SUFFIXES: .c .o

prpids: prpids.o
	$(CC) -o $(PROG) $(PROG).o

prpids.o: prpids.c
	$(CC) -c -o $(PROG).o $(PROG).c

clean:
	$(RM) -f $(PROG).o

run:
	$(SRCDIR)/$(PROG)

dist: clean
	$(TAR) -cvf $(DISTDIR)/$(PROG).tar $(PROG).c $(PROG) makefile
