#ifndef _STRVEC_H_
#define _STRVEC_H_

#include <string>
#include <memory>
#include <utility>

class StrVec
{

public:
		StrVec ()
			:elem (nullptr), first_empty (nullptr), cap (nullptr) {}
		StrVec (const StrVec &sv);
		StrVec& operator= (const StrVec &sv);
		~StrVec ();
		void PushBack(const std::string &s);
		size_t Size () const 
		{
			return first_empty - elem;
		}

		size_t Capacity () const
		{
			return cap - elem;
		}

		std::string* Begin () const 
		{
			return elem;
		}

		std::string* End () const
		{
			return first_empty;
		}
		void Print ();

private:
		static std::allocator<std::string> alloc;
		void Check ()
		{
			if (Size () == Capacity ())
				Reallocate ();
		}
		void Reallocate ();
		void Free ();
		std::pair<std::string*, std::string*> AllocateNCopy (const std::string *b, const std::string *e);
			

private:
		std::string *elem;
		std::string *first_empty;
		std::string *cap;

};

#endif
