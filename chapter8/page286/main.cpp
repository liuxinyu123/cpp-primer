#include <fstream>

int main(int argc, char *argv[])
{
	std::ofstream out("file.txt", std::ofstream::out|std::ofstream::app);
		//模式：app trunc ate in out binary
	return 0;
}
