cc = g++
CXXFLAGS = -Wall 

target = main
objects = main.o sales_item.o
$(target) : $(objects)
	$(cc) -o $(target) $(objects)

main.o : sales_item.h

sales_item.o : sales_item.h

.PHONY : clean

clean:
	rm $(target) $(objects)
