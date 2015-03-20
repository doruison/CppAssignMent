#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>

#include <cstring>




using namespace std;

//本版本：《primer》8.5
//“隐式模板实例化”错误可能是未导入头文件。本例中是fstream文件流头文件。



int main(){
string line;
vector<string> vs;
ifstream input("README.md");

while(input>>line)
vs.push_back(line);

for(auto vsit=vs.begin();vsit!=vs.end();vsit++)
{

    cout<<*vsit;


}

}
