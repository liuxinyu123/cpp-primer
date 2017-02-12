#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <string>
#include <set>

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
		void Save (Folder &f);
		void Remove (Folder &f);

private:
		std::string contents;
		std::set<Folder*> folders;

		void AddToFolders (const Message &m);
		void RemoveFromFolders ();
};

#endif 
