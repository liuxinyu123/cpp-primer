#include <iostream>
#include "message.h"
#include "folder.h"

int main (int argc, char *argv[])
{
	Message m1 ("hello");
	Message m2 ("world");
	Message m3 = m1;
	Message m4 (m2);

	Folder f1, f2, f3;


	return 0;
}
