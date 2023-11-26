#! /bin/bash

pro: main.o construc_Feet_zero.o construc_Feet_two.o copy_construc_Feet.o getFeet.o showFeet.o construc_Meter_zero.o construc_Meter_two.o copy_construc_Meter.o getMeter.o showMeter.o
	g++ -o pro main.o construc_Feet_zero.o construc_Feet_two.o copy_construc_Feet.o getFeet.o showFeet.o construc_Meter_zero.o construc_Meter_two.o copy_construc_Meter.o getMeter.o showMeter.o


main.o: main.cpp headers.h classes.h
	g++ -c main.cpp

construc_Meter_zero.o: construc_Meter_zero.cpp headers.h classes.h
	g++ -c construc_Meter_zero.cpp

construc_Meter_two.o: construc_Meter_two.cpp headers.h classes.h
	g++ -c construc_Meter_two.cpp

copy_construc_Meter.o: copy_construc_Meter.cpp headers.h classes.h
	g++ -c copy_construc_Meter.cpp

getMeter.o: getMeter.cpp headers.h classes.h
	g++ -c getMeter.cpp

showMeter.o: showMeter.cpp headers.h classes.h
	g++ -c showMeter.cpp


construc_Feet_zero.o: construc_Feet_zero.cpp headers.h classes.h
	g++ -c construc_Feet_zero.cpp

construc_Feet_two.o: construc_Feet_two.cpp headers.h classes.h
	g++ -c construc_Feet_two.cpp

copy_construc_Feet.o: copy_construc_Feet.cpp headers.h classes.h
	g++ -c copy_construc_Feet.cpp

getFeet.o: getFeet.cpp headers.h classes.h
	g++ -c getFeet.cpp

showFeet.o: showFeet.cpp headers.h classes.h
	g++ -c showFeet.cpp
