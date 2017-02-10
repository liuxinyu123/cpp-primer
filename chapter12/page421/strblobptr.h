#ifndef _STRBLOBPTR_H_
#define _STRBLOBPTR_H_

#include <string>
#include <memory>

class StrBlobPtr
{
public:
		StrBlobPtr () : curr (0) {}
		StrBlobPtr (StrBlob &sb, size_t sz = 0) : wptr (sb.data()), curr (sz) {}
		std::string& Deref () const;
		StrBlobPtr& Increment ();
private:
		std::shared_ptr<std::vector<std::string>> Check (std::size_t, const std::string&) const;
		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t curr;
};

#endif
