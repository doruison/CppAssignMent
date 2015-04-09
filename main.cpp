#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <memory>
#include <gtest/gtest.h>

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

int foo(int a, int b)
{

	return a + b;
}

TEST(FooTest, HandleNoneZeroInput)
{
	EXPECT_EQ(14, foo(4, 10));
	EXPECT_EQ(48, foo(30, 18));
}



int main(int argc,char *argv[]){

	shared_ptr< vector<int>> p = gen();
	deal(p);
	print(p);
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();


}
