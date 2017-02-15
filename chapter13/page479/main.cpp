#include <iostream>
#include <utility>
#include "message.h"
#include "folder.h"

int main (int argc, char *argv[])
{
	Message m1 ("hello");
	Message m2 ("world");

	Folder f1 ("folder1");
	Folder f2 ("folder2");

	m1.Save (f1);
	m2.Save (f2);
	m2.Save (f1);

	m1.PrintFolder ();
	m2.PrintFolder ();
	
	Message m3 = std::move (m2);
	m3.PrintFolder ();

	return 0;
}
