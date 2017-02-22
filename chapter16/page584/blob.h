#ifndef _BLOB_H_
#define _BLOB_H_

#include <initializer_list>
#include <memory>
#include <vector>
#include <string>

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
		T& Back () const;
		T& operator[] (size_type i) const;
private:
		std::shared_ptr<std::vector<T>> data;
		void Check (size_type i, const std::string &msg) const;
};

#endif
