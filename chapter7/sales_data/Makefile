cc = g++ 
CXXFLAGS = -Wall 
CXXFLAGS += -std=gnu++11

target = main
objects = main.o sales_data.o
$(target) : $(objects)
	$(cc) $(objects) -o $(target)

main.o : sales_data.h

sales_data.o : sales_data.h

.PHONY : clean

clean:
	rm $(target) $(objects)
