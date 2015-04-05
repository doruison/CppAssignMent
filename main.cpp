
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
	std::string isbn() const;
	virtual double net_price(std::size_t n)const;
};

class Bulk_Quote :public Quote{
public :
	double net_price(std::size_t) const override;




};

