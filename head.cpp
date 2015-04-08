
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>
#include "headtest.h" 
#include <cstring>








HasPtr::HasPtr(const HasPtr &in) :
ps(new std::string(" ")), i(0), use(0){
	++*(in.use);
	ps = in.ps;
	i = in.i;
	use = in.use;
}

HasPtr::~HasPtr(){
	if (--*use == 0)
	{
		delete ps;

		delete use;
	}

}

HasPtr& HasPtr::operator=(const HasPtr& in){
	++*(in.use);
	if (--*use == 0)
	{
		delete ps;

		delete use;
	}
	ps = in.ps;
	use = in.use;
	i = in.i;
	return *this;

}