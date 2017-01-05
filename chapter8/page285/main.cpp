#include <fstream>
#include <iostream>
#include <string>

using std::string;

string Read(std::istream &is);

int main(int argc, char *argv[])
{
	std::ifstream in;

	for(auto p = argv + 1; p != argv + argc; ++p)
	{
		in.open(*p);
		if(in)
			std::cout << "Opened " << string(*p) << ":" << Read(in) << std::endl;
		else
			std::cout << "Can not open " << string(*p) << std::endl;
		in.close();
	}

	return 0;	

}

string Read(std::istream &is)
{	
	string str, res;
	while(getline(is, str))
		res = res + str + '\n';

	return res;
}
