cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = main.o strvec.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : strvec.h

strvec.o : strvec.h

.PHONY : clean

clean :
	rm $(target) $(objects)
