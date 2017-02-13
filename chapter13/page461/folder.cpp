#include <iostream>
#include "folder.h"
#include "message.h"

Folder::Folder (const Folder &f)
	:messages (f.messages), name (f.name)
{
	AddToMessage (*this);			
}

Folder& Folder::operator= (const Folder &f)
{
	RemoveFromMessage ();
	messages = f.messages;
	name = f.name;
	AddToMessage (*this);

	return *this;
}

void Folder::Save (const Message &m)
{
	messages.insert (&m);
	m.AddFolder (*this);
}

void Folder::Remove (const Message &m)
{
	messages.erase (&m);
	m.RemoveFolder (*this);
}

void Folder::AddMessage (const Message &m)
{
	messages.insert (&m);	
}

void Folder::RemoveMessage (const Message &m)
{
	messages.erase (&m);
}

void Folder::AddToMessage (const Folder &f)
{
	for (auto m : f.messages)
		m -> Save (f);	
}

void Folder::RemoveFromMessage ()
{
	for (auto m : messages)
		m -> Remove (*this);
}

void swap (Folder &f1, Folder &f2)
{
	using std::swap;

	for (auto m : f1.messages)
		m -> Remove (f1);
	for (auto m : f2.messages)
		m -> Remove (f2);

	swap (f1.messages, f2.messages);
	swap (f1.name, f2.name);

	for (auto m : f1.messages)
		m -> Save (f1);
	for (auto m : f2.messages)
		m -> Save (f2);
}

void Folder::PrintMessage ()
{
	for (auto m : messages)
		m -> PrintContent ();
}

void Folder::PrintName ()
{
	std::cout << name << std::endl;
}
