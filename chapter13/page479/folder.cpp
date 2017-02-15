#include <iostream>
#include "folder.h"
#include "message.h"

Folder::Folder (const Folder &f)
	:messages (f.messages), name (f.name)
{
	AddToMessage (*this);			
}

Folder::~Folder ()
{
	for (auto m : messages)
		m -> RemoveFolder (*this);	
}

Folder& Folder::operator= (const Folder &f)
{
	RemoveFromMessage ();
	messages = f.messages;
	name = f.name;
	AddToMessage (*this);

	return *this;
}

void Folder::Save (Message &m)
{
	messages.insert (&m);
	m.AddFolder (*this);
}

void Folder::Remove (Message &m)
{
	messages.erase (&m);
	m.RemoveFolder (*this);
}

void Folder::AddMessage (Message &m)
{
	messages.insert (&m);	
}

void Folder::RemoveMessage (Message &m)
{
	messages.erase (&m);
}

void Folder::AddToMessage (Folder &f)
{
	for (auto m : f.messages)
		m -> Save (f);	
}

void Folder::RemoveFromMessage ()
{
	for (auto m : messages)
		m -> Remove (*this);
}


void Folder::PrintMessage ()
{
	std::cout << name << " has message: " << std::endl;

	for (auto m : messages)
		m -> PrintContent ();
}

void Folder::PrintName ()
{
	std::cout << name << std::endl;
}
