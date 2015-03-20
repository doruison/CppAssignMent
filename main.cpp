#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include<list>
#include <map>
#include <cstring>




using namespace std;

//本版本：《primer》3.42


int main(){
    int num1[5]; int temp;
    vector<int> num2;
    cout<<"sf";
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        num2.push_back(temp);



    }
    for (int i = 0; i < 5; i++)
    {
        num1[i] = num2[i];



    }
    for (int i = 0; i < 5; i++)
    {
        cout << num1[i]<<" ";



    }




}
