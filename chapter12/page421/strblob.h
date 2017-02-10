#ifndef _STRBLOB_H_
#define _STRBLOB_H_

#include <vector>
#include <string>
#include <memory>

class StrBlob
{
public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob ();
		StrBlob (std::initializer_list<std::string> il);
		size_type Size () const { return data -> size (); }
		bool Empty () const { return data -> empty (); }
		void Push_back (const std::string &s) { data -> push_back (s); }
		void Pop_back ();
		std::string& Front () const;
		std::string& Back () const;
private:
		std::shared_ptr<std::vector<std::string>> data;
		void Check (size_type i, const std::string &msg) const;
};

#endif
