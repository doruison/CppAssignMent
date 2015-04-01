
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
HasPtr(const std::string & s=std::string()) :
ps(new std::string(s)),i(0){}

HasPtr(const HasPtr& );
string const getps (){return *ps;}
private :
std::string *ps;
int i;




};



HasPtr::HasPtr(const HasPtr &in):
    ps(new std::string(" ")),i(0){

*ps=*(in.ps);
i=in.i;

}


int main(){
    string s;
cin>>s;
HasPtr hp1(s);
HasPtr hp2=hp1;
cout<<hp2.getps();
cout<<"flag";






}
