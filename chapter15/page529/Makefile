cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o quote.o bulkquote.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : quote.h bulkquote.h

quote.o : quote.h

bulkquote.o : bulkquote.h quote.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
