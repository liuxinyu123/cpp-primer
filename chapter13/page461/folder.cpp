#include "folder.h"

Folder::Folder (const Folder &f)
	:messages (f.messages)
{
	AddToMessage (this);			
}

Folder& Folder::operator= (const Folder &f)
{
	RemoveFromMessage ();
	messages (f.messages);
	AddToMessage (&f);

	return *this;
}

void Folder::Save (Message &m)
{
	messages.insert (&m);
}

void Folder::Remove (Message &m)
{
	messages.erase (&m);
}

void Folder::AddMessage (Message *pm)
{
	messages.insert (pm);	
}

void Folder::RemoveMessage (Message *pm)
{
	messages.erase (pm);
}

void Folder::AddToMessage (const Folder &f)
{
	for (auto m : f)
		m -> folders.insert (&f);	
}

void Folder::RemoveFromMessage ()
{
	for (auto m : messages)
		m -> folders.erase (this);
}
