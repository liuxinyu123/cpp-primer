#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class PrintString 
{

public:
		PrintString (std::ostream &o = std::cout, char c = ' ')
			:os (o), sep (c) {}
		void operator() (std::string &s) 
		{
			os << s << sep;
		}
private:
		std::ostream &os;
		char sep;
};

int main (int argc, char *argv[])
{
	std::vector<std::string> strVec = {"what", "are", "you", "doing"};
	
	PrintString ps;

	for (std::size_t i = 0; i < strVec.size (); ++i)
		ps (strVec[i]);
	std::cout << std::endl;
	
	//one method
	PrintString pError (std::cerr, '\n');
	std::for_each (strVec.begin (), strVec.end (), pError);

	//another method
	//std::for_each (strVec.begin (), strVec.end (), PrintString (std::cerr, '\n'));

	return 0;
}
