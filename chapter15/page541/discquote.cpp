#include "discquote.h"

DiscQuote::DiscQuote (const std::string &s, double p, std::size_t q, double disc)
		:Quote (s, p), quantity (q), discount (disc) {}


//std::ostream& operator<< (std::ostream &os, const DiscQuote &dq)
//{
	//os << "Isbn : " << Isbn () << " Price : " << price << " Quantity : " 
			//<< quantity << " Discount : " << discount;
//
	//return 0;
//}
