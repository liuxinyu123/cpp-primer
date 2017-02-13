#ifndef _FOLDER_H_
#define _FOLDER_H_

#include <set>
#include <string>

class Message;

class Folder
{
friend class Message;
friend void swap (Message &m1, Message &m2);

public:
		Folder (const std::string &s = "")
			:name (s) {}
		Folder (const Folder &f);
		Folder& operator= (const Folder &f);
		~Folder ();
		void Save (Message &m);
		void Remove (Message &m);
		void PrintMessage ();
private:
		std::set<Message*> messages;
		std::string name;

		void AddMessage (Message &m);
		void RemoveMessage (Message &m);
		void AddToMessage (Folder &f);
		void RemoveFromMessage ();
		void PrintName ();
};

#endif
