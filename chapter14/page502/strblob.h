#ifndef _STRBLOB_H_
#define _STRBLOB_H_

#include <vector>
#include <initializer_list>
#include <memory>
#include <string>

class StrBlob
{

public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob ();
		StrBlob (std::initializer_list<std::string> il);
		size_type Size () const
		{
			return data -> size ();
		}
		bool Empty () const
		{
			return data -> empty ();
		}
		void PushBack (const std::string &s)
		{
			data -> push_back (s);
		}
		void PopBack ()
		{
			data -> pop_back ();
		}
		std::string& Front () const
		{
			return data -> front ();
		}
		std::string& Back () const 
		{
			return data -> back ();
		}

private:
		void Check (size_type i, const std::string &msg) const;
private:
		std::shared_ptr<std::vector<std::string>> data;

};

#endif
