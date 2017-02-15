#include <iostream>
#include <utility>
#include "message.h"
#include "folder.h"
#include <set>

Message::Message (const Message &m)
	:contents (m.contents), folders (m.folders)
{
	AddToFolders (m);
}

Message::Message (Message &&m)
	:contents (std::move (m.contents))
{
	MoveFolders (m);
}

Message& Message::operator= (const Message &m)
{
	RemoveFromFolders ();
	contents = m.contents;
	folders = m.folders;
	AddToFolders (m);

	return *this;
}

Message& Message::operator= (Message &&m)
{
	if (this != &m)
	{
		RemoveFromFolders ();
		contents = std::move (m.contents);
		MoveFolders (m);
	}	

	return *this;	
}

Message::~Message ()
{
	RemoveFromFolders ();
}

void Message::Save (Folder &f)
{
	folders.insert (&f);
	f.AddMessage (*this);
}

void Message::Remove (Folder &f)
{
	folders.erase (&f);
	f.RemoveMessage (*this);
}

void Message::AddToFolders (const Message &m)
{
	for (auto f : m.folders)
		f -> AddMessage (*this);
}

void Message::RemoveFromFolders ()
{
	for (auto f : folders)
		f -> RemoveMessage (*this);
}

void swap (Message &m1, Message &m2)
{
	using std::swap;

	for (auto f : m1.folders)
		f -> RemoveMessage (m1);
	for (auto f : m2.folders)
		f -> RemoveMessage (m2);

	swap (m1.contents, m2.contents);
	swap (m1.folders, m2.folders);

	for (auto f : m1.folders)
		f -> AddMessage (m1);
	for (auto f : m2.folders)
		f -> AddMessage (m2);
		
}

void Message::PrintFolder ()
{
	std::cout << contents << " in Folder: " << std::endl;

	for (auto f : folders)
		f -> PrintName ();

	std::cout << std::endl;	
}

void Message::PrintContent ()
{
	std::cout << contents << std::endl;
}

void Message::AddFolder (Folder &f)
{
	folders.insert (&f);
}

void Message::RemoveFolder (Folder &f)
{
	folders.erase (&f);
}

void Message::MoveFolders (Message &m)
{
	folders = std::move (m.folders);

	for (auto f : m.folders)
	{
		f -> RemoveMessage (m);
		f -> AddMessage (*this);
	}

	m.folders.clear ();
}
