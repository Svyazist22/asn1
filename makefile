OBJECTS = main.o file.o tools.o
MAIN = apps/
LIBS = libs/
INC = inc/
CFLAGS = -c -Wall

all: asn1

asn1: $(OBJECTS)
	g++ $(OBJECTS) -o asn1

main.o: $(MAIN)main.cpp $(INC)file.h $(INC)tools.h
	g++ $(CFLAGS) $(MAIN)main.cpp $(INC)file.h $(INC)tools.h

file.o: $(LIBS)file.cpp
	g++ $(CFLAGS) $(LIBS)file.cpp

tools.o: $(LIBS)tools.cpp
	g++ $(CFLAGS) $(LIBS)tools.cpp


clean:
		rm asn1 $(OBJECTS)

.PHONY : all clean