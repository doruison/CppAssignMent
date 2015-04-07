
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>

#include <cstring>




using namespace std;



class HasPtr{
public:
	HasPtr(const std::string & s = std::string()) :
		ps(new std::string(s)), i(0),use(new int(1)){}
	~HasPtr(){
		if (--*use == 0)
		{
			delete ps;
		
			delete use;
		}

	}


	HasPtr(const HasPtr&);
	string const getps(){ return *ps; }
	HasPtr &operator=(const HasPtr& in){
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
private:
	std::string *ps;
	int i;
	int * use;



};



HasPtr::HasPtr(const HasPtr &in) :
ps(new std::string(" ")), i(0),use(0){
	++*(in.use);
	ps = in.ps;
	i = in.i;
	use = in.use;
}


int main(){

	HasPtr hp2("hp2");
	cout << hp2.getps();
	string s;
	cin >> s;
	auto hp1(s);
	hp2 = hp1;
	hp2 = hp2;
	cout << hp2.getps();

	cout << "flag";

	getchar();
	getchar();




}
