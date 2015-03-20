#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>

#include <cstring>




using namespace std;

//本版本：《primer》12.6
//注意离开时用delete释放
//迭代器可看做指针（实际上指针是一种迭代器），×运算取得原元素。

vector<int> *gen()
{
    return new vector<int>;


}



void deal(vector<int> *p)
{
    int in;
    while(cin>>in)
        p->push_back(in);


}

void print(vector<int> *p)
{
int it=0;
for(auto i=p->begin();i!=p->end(),it=*i;i++)
cout<<it;

delete p;
}

int main(){

vector<int> *p=gen();
deal(p);
print(p);



}
