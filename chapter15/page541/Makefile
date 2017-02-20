cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o quote.o discquote.o bulkquote.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : quote.h discquote.h bulkquote.h

quote.o : quote.h

discquote.o : discquote.h

bulkquote.o : bulkquote.h

.PHONY : clean

clean :
	rm $(target) $(objects)
