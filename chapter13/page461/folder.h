#ifndef _FOLDER_H_
#define _FOLDER_H_

#include <set>

class Folder
{
friend class Message;
friend void swap (Message &m1, Message &m2);

public:
		Folder () = default;
		Folder (const Folder &f);
		Folder& operator= (const Folder &f);
		~Folder ();
		void Save (Message &m);
		void Remove (Message &m);
private:
		std::set<Message*> messages;
		void AddMessage (Message *pm);
		void RemoveMessage (Message *pm);
		void AddToMessage (const Folder &f);
		void RemoveFromMessage ();
};

#endif
