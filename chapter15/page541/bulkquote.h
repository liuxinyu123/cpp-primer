#ifndef _BULKQUOTE_H_
#define _BULKQUOTE_H_

#include "discquote.h"

class BulkQuote : public DiscQuote
{

public:
		BulkQuote () = default;
		BulkQuote (const std::string &s, double p, std::size_t q, double disc);
		double net_price (std::size_t n) const override;
private:
	
protected:

};

#endif
