CC=g++
CFLAGS=-std=c++11
OUTPUTDIR=out

all: CreateUtils InitOutputDir AreaCalc CleanUp

AreaCalc:
	$(CC) -Wall main.cpp $(OUTPUTDIR)/*.o -o $(OUTPUTDIR)/areaCalc $(CFLAGS)

InitOutputDir:
	mkdir -p $(OUTPUTDIR)
	mv Utils/*.o $(OUTPUTDIR)

CreateUtils:
	make -C Utils

CleanUp:
	rm out/*.o

clean:
	rm -rf $(OUTPUTDIR)
