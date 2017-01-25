#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
	auto p1 = make_shared<int> (11);
	auto p2 (p1);

}
