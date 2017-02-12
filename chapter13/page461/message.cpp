#include "message.h"

Message::Message (const Message &m)
	:contents (m.contents), folders (m.folders)
{
	AddToFolders (m);
}

Message& Message::operator= (const Message &m)
{
	RemoveFromFolders ();
	contents = m.contents;
	folders = m.folders;
	AddToFolders (m);

	return *this;
}

Message::~Message ()
{
	RemoveFromFolders ();
}

void Message::Save (Folder &f)
{
	folders.insert (&f);
	f.AddMessage (this);
}

void Message::Remove (Folder &f)
{
	folders.erase (&f);
	f.RemoveMessage (this);
}

void Message::AddToFolders (const Message &m)
{
	for (auto f : m)
		f -> AddMessage (this);
}

void Message::RemoveFromFolders ()
{
	for (auto f : folders)
		f -> RemoveMessage (this);
}
