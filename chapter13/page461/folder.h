#ifndef _FOLDER_H_
#define _FOLDER_H_

#include <set>
#include <string>

class Message;

class Folder
{
friend class Message;
friend void swap (Folder &f1, Folder &f2);

public:
		Folder (const std::string &s = "")
			:name (s) {}
		Folder (const Folder &f);
		Folder& operator= (const Folder &f);
		~Folder ();
		void Save (const Message &m);
		void Remove (const Message &m);
		void PrintMessage ();
private:
		std::set<Message*> messages;
		std::string name;

		void AddMessage (const Message &m);
		void RemoveMessage (const Message &m);
		void AddToMessage (const Folder &f);
		void RemoveFromMessage ();
		void PrintName ();
};

#endif
