cc = g++ 
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o screen.o

$(target) : $(objects)
	$(cc) $(objects) -o $(target)

main.o : screen.h

screen.o : screen.h

.PHONY : clean

clean:
	rm $(target) $(objects)
