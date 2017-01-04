all: CreateUtils
	g++ -Wall main.cpp out/*.o -o out/areaCalc -std=c++11

CreateUtils: CreateOut
	make -C Utils

CreateOut:
	mkdir -p out
