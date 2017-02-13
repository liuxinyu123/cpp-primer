cc = g++
CXXFLAGS = -Wall
CXXFLAGS += -std=gnu++11

target = main
objects = message.o folder.o main.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

message.o : message.h

folder.o : folder.h

main.o : message.h folder.h

.PHONY : clean

clean :
	rm $(target) $(objects)
