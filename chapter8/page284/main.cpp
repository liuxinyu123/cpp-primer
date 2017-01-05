#include <iostream>
#include <fstream>
#include <string>

using std::string;

int main(int argc, char *argv[])
{
	std::ifstream in;
	in.open("filein.txt");
	string str;
	
	std::ofstream out("fileout.txt");
	
	while(getline(in,str))
		out << str << std::endl;

	if(out.is_open())
		out.close();
	out.open("fileout.copy");
	out << "hello,world!" << std::endl;
	return 0;
}
