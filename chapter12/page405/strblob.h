#ifndef _STRBLOBO_H_
#define _STRBLOBO_H_

#include <string>
#include <vector>
#include <memory>
#include <initializer_list>

class StrBlob
{
public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob ();
		StrBlob (std::initializer_list<std::string> il);
		size_type Size () const  { return data -> size (); }
		bool Empty () { return data -> empty (); }
		void PushBack (const std::string &s) { data -> push_back (s); }
		void PopBack ();
		std::string& Front ();
		std::string& Back ();
		void Print ();

private:
		std::shared_ptr<std::vector<std::string>> data;
		void Check (size_type i, const std::string &msg) const;
};

#endif 
