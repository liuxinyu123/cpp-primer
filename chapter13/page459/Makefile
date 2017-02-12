cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o hasptr.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : hasptr.h

hasptr.o : hasptr.h

.PHONY : clean
	
clean :
	rm $(target) $(objects)
