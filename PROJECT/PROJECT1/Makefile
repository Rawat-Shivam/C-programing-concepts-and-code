#!/bin/bash
LIB:main.o mainMenu.o checkin_book.o checkin_periodical.o checkin_DVD.o display.o display_book.o display_periodical.o display_DVD.o checkout_book.o checkout_periodical.o checkout_DVD.o
	g++ -o LIB main.o mainMenu.o checkin_book.o checkin_periodical.o checkin_DVD.o display.o display_book.o display_periodical.o display_DVD.o checkout_book.o checkout_periodical.o checkout_DVD.o

main.o:main.cpp headers.h class.h
	g++ -c main.cpp
mainMenu.o:mainMenu.cpp headers.h class.h
	g++ -c mainMenu.cpp
checkin_book.o:checkin_book.cpp headers.h class.h
	g++ -c checkin_book.cpp
checkin_periodical.o:checkin_periodical.cpp headers.h class.h
	g++ -c checkin_periodical.cpp
checkin_DVD.o:checkin_DVD.cpp headers.h class.h
	g++ -c checkin_DVD.cpp
checkout_book.o:checkout_book.cpp headers.h class.h
	g++ -c checkout_book.cpp
checkout_periodical.o:checkout_periodical.cpp headers.h class.h
	g++ -c checkout_periodical.cpp
checkout_DVD.o:checkout_DVD.cpp headers.h class.h
	g++ -c checkout_DVD.cpp
display.o:display.cpp headers.h class.h
	g++ -c display.cpp
display_book.o:display_book.cpp headers.h class.h
	g++ -c display_book.cpp
display_periodical.o:display_periodical.cpp headers.h class.h
	g++ -c display_periodical.cpp
display_DVD.o:display_DVD.cpp headers.h class.h
	g++ -c display_DVD.cpp
