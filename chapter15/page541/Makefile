cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o quote.o discquote.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : quote.h discquote.h

quote.o : quote.h

discquote.o : discquote.h

.PHONY : clean

clean :
	rm $(target) $(objects)
