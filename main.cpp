
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>
#include "headtest.h" 

#include <cstring>




using namespace std;





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
