cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=c++0x
targets = main
objects = main.o strblob.o

$(targets) : $(objects)
	$(cc) -o $(targets) $(objects)

main.o : strblob.h

strblob.o : strblob.h

.PHONY : clean

clean : 
	rm $(targets) $(objects)
