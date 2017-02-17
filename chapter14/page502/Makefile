cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o strblob.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : strblob.h

strblob.o : strblob.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
