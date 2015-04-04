
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


   bool operator()( string &s)
    {
		is >> s;
		if (s!="exit")
		{
			s += sep;
			return true;
		}
		else return false;
    }



private :
    istream &is;
    char sep;

};


class check{
public:
	check(string init="0") :del(init){}


	bool operator()(string &s)
	{
		cout << "  s:" + s + " init:" + del << endl;
		if (del+"\t" == s)
		{
			cout << "Hit!";
			return true;
		}
		else {
			cout << "!Hit";
			return false;

		}
	}


private:
	string del;

};


int main(){
    input i(cin,'\t');
	string s;
	check c("del");
	vector<string> vs, vs2;
	while (i(s))
		vs.push_back(s);

	for (auto i = vs.begin(); i != vs.end(); i++)
		cout << *i;
	cout << endl;
	cout << "flags";
	string d = "k";
	remove_copy_if(vs.begin(), vs.end(),back_inserter(vs2),c);


	for (auto i = vs2.begin(); i != vs2.end(); i++)
		cout << *i;


}
