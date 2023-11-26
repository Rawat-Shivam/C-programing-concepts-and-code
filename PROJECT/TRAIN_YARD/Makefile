#!/bin/bash

project: main.o t_car_Constructor.o connect.o display.o reverse.o  train_Constructor.o create_links.o display_links.o reverse_links.o
	g++ -o project main.o t_car_Constructor.o connect.o display.o reverse.o  train_Constructor.o create_links.o display_links.o reverse_links.o

main.o: main.cpp headers.h classes.h
	g++ -c main.cpp

t_car_Constructor.o: t_car_Constructor.cpp headers.h classes.h
	g++ -c t_car_Constructor.cpp

connect.o: connect.cpp headers.h classes.h
	g++ -c connect.cpp

display.o: display.cpp headers.h classes.h
	g++ -c display.cpp

reverse.o: reverse.cpp headers.h classes.h
	g++ -c reverse.cpp

train_Constructor.o: train_Constructor.cpp headers.h classes.h
	g++ -c train_Constructor.cpp

create_links.o: create_links.cpp headers.h classes.h
	g++ -c create_links.cpp
	
display_links.o: display_links.cpp headers.h classes.h
	g++ -c display_links.cpp

reverse_links.o: reverse_links.cpp headers.h classes.h
	g++ -c reverse_links.cpp



