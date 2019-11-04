# Author: Nasseef Abukamail
#   Date: 2018-11-28
#   
# Makefile for the die project
# All commands under the rules must start with a tab

#Variables
CFLAGS = -Wall -std=c++11
CC = g++
#Linking all the files
#Create the executable program "die-main"
die-main: die-main.o die.o
	$(CC) $(CFLAGS) die.o die-main.o -o die-main

die.o: die.cc die.h
	$(CC) -c $(CFLAGS) die.cc

die-main.o: die-main.cc die.h
	$(CC) -c $(CFLAGS) die-main.cc

# remove all the object and executable files
clean:
	rm -f die-main.o die.o die-main
