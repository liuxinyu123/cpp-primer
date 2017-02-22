#ifndef _BLOB_H_
#define _BLOB_H_

#include <initializer_list>
#include <memory>
#include <vector>
#include <string>
#include <stdexcept>

template <typename T>
class Blob
{
typedef T value_type;
typedef std::vector<T>::size_type size_type;

public:
		Blob ();
		Blob (std::initializer_list<T> il);
		size_type Size () const
		{
			return data -> size ();
		}
		bool Empty () const
		{
			return data -> empty ();
		}
		void PushBack (const T &elem)
		{
			data -> push_back (elem);
		}
		void PopBack ()
		{
			data -> pop_back ();
		}
		T& Front () const;
		T& Back () const;
		T& operator[] (size_type i) const;
private:
		std::shared_ptr<std::vector<T>> data;
		void Check (size_type i, const std::string &msg) const;
};

template <typename T>
Blob:Blob ()
	:data (nullptr) {}

template <typename T>
Blob:Blob (std::initializer_list<T> il)
	:data (new std::vector<T> (il)) {}

template <typename T>
T& Blob:Back () const
{
	
}

template <typename T>
void Blob:Check (size_type i, const std::string &s = msg) const
{
	if (i >= Size ())	
		throw std::out_of_range (msg);
}
#endif
