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

void Message::swap (Message &m1, Message &m2)
{
	using std::swap;

	for (auto f : m1.folders)
		f -> RemoveMessage (&m1);
	for (auto f : m2.folders)
		f -> RemoveMessage (&m2);

	swap (m1.contents, m2.contents);
	swap (m1.folders, m2.folders);

	for (auto f : m1.folders)
		f -> AddMessage (&m1);
	for (auto f : m2.folders)
		f -> AddMessage (&m2);
		
}
