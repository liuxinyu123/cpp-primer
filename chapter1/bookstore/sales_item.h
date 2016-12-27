#ifndef _SALES_ITEMS_H_
#define _SALES_ITEMS_H_

class string;
class istream;
class ostream;

class Sales_item
{
public:
		Sales_item(const std::string &book = "", unsigned int cnt = 0, double rev = 0.0);//默认构造函数
		Sales_item(const Sales_item &item);//拷贝构造函数
		~Sales_item() {}//析构函数
		const std::string& Isbn() const  {return bookNo_;} //获取书号
		double RevPrice() const
	   	{
			if(unitSold_)
				return revenue_ / unitSold_;
			else
				return 0;
		}//计算平均价格
		friend std::istream& operator>>(std::istream &is, Sales_item &item);//重载>>操作符
		friend std::ostream& operator<<(std::ostream &os, const Sales_item &item);//重载<<操作符
		friend Sales_item operator+(const Sales_item &item1, const Sales_item &item2);//重载加法操作
		Sales_item& operator+=(const Sales_item &item);//重载+=操作
		friend bool operator==(const Sales_item &lhs, const Sales_item &rhs);
		friend bool operator!=(const Sales_item &lhs, const Sales_item &rhs);
private:
		std::string bookNo_;//书号
		unsigned int unitSold_;//售出数量
		double revenue_;//总价
};
#endif
