#ifndef _STRVEC_H_
#define _STRVEC_H_

#include <string>
#include <memory>
#include <initializer_list>

class StrVec
{

public:
		StrVec ()
			:element (nullptr), first_empty (nullptr), capacity (nullptr) {}
		StrVec (const StrVec &sv);
		StrVec (StrVec &&sv);
		StrVec& operator= (const StrVec &sv);
		StrVec& operator= (StrVec &&sv);
		StrVec& operator= (std::initializer_list<std::string> il);
		~StrVec ();
		void PushBack (const std::string &s);
		void PopBack ();
		size_t Size () const
		{
			return first_empty - element;
		}
		size_t Capacity () const 
		{
			return capacity - element;
		}
		bool Empty () const 
		{
			return element == first_empty;
		}
		bool Full () const
		{
			return !Empty () && (first_empty == capacity);
		}
		std::string* Begin () const
		{
			return element;
		}
		std::string* End () const
		{
			return first_empty;
		}
		void Print () const;
		std::string& operator[] (size_t i)
		{
			return element[i];
		}
		const std::string& operator[] (size_t i) const
		{
			return element[i];
		}
private:
		void Free ();
		std::pair<std::string*, std::string*> Allocate_N_Copy (const std::string *begin, const std::string *end);
		void Check ();
		void Reallocate ();

private:
		std::string *element;
		std::string *first_empty;
		std::string *capacity;
		static std::allocator<std::string> alloc;
};

#endif
