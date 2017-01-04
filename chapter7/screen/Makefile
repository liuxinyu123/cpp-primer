cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o screen.o windowmanager.o

$(target) : $(objects)
	$(cc) $(objects) -o $(target)

main.o : screen.h

screen.o : screen.h

windowmanager.o : windowmanager.h

.PHONY : clean

clean:
	rm $(target) $(objects)
