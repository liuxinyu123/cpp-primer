#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <string>
#include <set>

class Folder;

class Message 
{
friend class Folder;
friend void swap (Message &m1, Message &m2);

public:
		explicit Message (const std::string &s = "")
			:contents (s) {}
		Message (const Message &m);
		Message& operator= (const Message &m);
		~Message ();
		void Save (const Folder &f);
		void Remove (const Folder &f);
		void PrintFolder ();
private:
		std::string contents;
		std::set<Folder*> folders;

		void AddToFolders (const Message &m);
		void RemoveFromFolders ();
		void PrintContent ();
};

#endif 
