#ifndef _STRBLOB_H_
#define _STRBLOB_H_

#include <iostream>
#include <vector>
#include <initializer_list>
#include <memory>
#include <string>

class StrBlobPtr;

class StrBlob
{
		friend class StrBlobPtr;
		friend std::ostream& operator<< (std::ostream &os, const StrBlob &sb);
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
		void PushBack (const std::string &s);
		void PopBack ();
		std::string& Front () const;
		std::string& Back () const;
		StrBlobPtr Begin ();
		StrBlobPtr End ();
		
private:
		void Check (size_type i, const std::string &msg) const;
private:
		std::shared_ptr<std::vector<std::string>> data;

};

#endif
