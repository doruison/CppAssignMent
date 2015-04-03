
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>

#include <cstring>




using namespace std;



class input{
public:
    input(istream &i=cin,char c=' '):is(i),sep(c){}


    void operator()( string &s)
    {

        is>>s;
s+=sep;

    }



private :
    istream &is;
    char sep;

};



int main(){
    input i(cin,'\t');
string s="zsf";
i(s);
cout<<s;

}
