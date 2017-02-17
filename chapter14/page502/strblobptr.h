#ifndef _STRBLOBPTR_H_
#define _STRBLOBPTR_H_

#include <memory>
#include <string>
#include <vector>
#include "strblob.h"

class StrBlob;

class StrBlobPtr
{
		friend class StrBlob;
public:
		StrBlobPtr ()
			:curr (0) {}
		StrBlobPtr (StrBlob &sb, std::size_t i = 0) 
			:wptr (sb.data), curr (i)  {}
		std::string& Deref () const;
		StrBlobPtr& Incr ();
private:
		std::shared_ptr<std::vector<std::string>> 
			Check (std::size_t i, const std::string &msg) const;
private:
		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t curr;

};

#endif
