cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

targets = main
objects = hasptr.o main.o

$(targets) : $(objects)
	$(cc) -o $(targets) $(objects)

hasptr.o : hasptr.h

main.o : hasptr.h

.PHONY : clean

clean :
	rm $(targets) $(objects)
