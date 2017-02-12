#ifndef _FOLDER_H_
#define _FOLDER_H_

#include <set>

class Folder
{
friend class Message;

public:
		Folder ();
		void AddMessage ();
		void RemoveMessage ();
private:
		std::set<Message*> messages;
};

#endif
