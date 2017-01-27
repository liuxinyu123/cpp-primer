#include <iostream>
#include <string>
#include "strblob.h"

using namespace std;

int main (int argc, char *argv[])
{
	StrBlob sb1;
	
	sb1.Front ();
	{
		StrBlob sb2 = { "hello", "world", "what", "are", "you", "doing"};
		sb1 = sb2;
	}
	sb1.Print ();
	return 0;
}
