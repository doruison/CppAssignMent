
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
~HasPtr(){
    delete ps;


}
HasPtr(const HasPtr& );
string const getps (){return *ps;}
HasPtr &operator=(const HasPtr& in){

    *ps=*(in.ps);
    i=in.i;
    return *this;

}
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

HasPtr hp2("hp2");
cout<<hp2.getps();
string s;
cin>>s;
auto hp1(s);
hp2=hp1;
cout<<hp2.getps();

cout<<"flag";






}
