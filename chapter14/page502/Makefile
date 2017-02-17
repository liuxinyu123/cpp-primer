cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o strblob.o strblobptr.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : strblob.h strblobptr.h

strblob.o : strblob.h

strblobptr.o : strblobptr.h

.PHONY : clean

clean : 
	rm $(target) $(objects)
