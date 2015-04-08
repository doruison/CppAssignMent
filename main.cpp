#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <memory>

#include <cstring>




using namespace std;

//本版本：《primer》12.7并修正12.6


shared_ptr< vector<int>> gen()
{
	return make_shared < vector<int> >();


}



void deal(shared_ptr< vector<int>> p)
{
	int in;
	while (cin >> in)
		p->push_back(in);


}

void print(shared_ptr< vector<int>> p)
{
	int it = 0;
	for (auto i = p->begin(); i != p->end(); i++)
	{
		it = *i;
		cout << it;
	}
}

int main(){

	shared_ptr< vector<int>> p = gen();
	deal(p);
	print(p);



}
