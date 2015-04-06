
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>

#include <cstring>




using namespace std;

class Quote{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :bookNo(book), price(sales_price){}
	string isbn() const { return bookNo; }
	virtual double net_price(size_t n) const
	{
		return n*price;
}
	virtual ~Quote(){};
	virtual void  Debug(){
		cout << "bookNo   price"<<endl;
	
	}
private :string bookNo;
protected: double price = 0;



};

class Bulk_Quote :public Quote{
public :
	Bulk_Quote(const string & book, double p, size_t qty, double disc) :
		Quote(book, p), min_qty(qty), discount(disc){};

	double net_price(size_t cnt)const
	{
		if (cnt >= min_qty)
			return cnt*(1 - discount)*price;
		else return cnt*price;
	
	}
	virtual void  Debug(){
		cout << "min_qty  discount  price" << endl;

	}
private:
	size_t min_qty = 0;
	double discount = 0;



};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "isbn:" << item.isbn() << "#sold:"
		<< n << "total due :" << ret << endl;
	return ret;




}

int main(){
	Quote q("9787121",35);
	Bulk_Quote bq("9787121", 35, 100, 0.12);
	Quote* qp;
	qp = &q;
	print_total(cout,*qp,150);
	(*qp).Debug();
	qp = &bq;
	print_total(cout, *qp, 150);
	(*qp).Debug();
	qp->Quote::Debug();

	getchar();








}