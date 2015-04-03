
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<cctype>
#include<numeric>
#include <fstream>

#include <cstring>




using namespace std;



class Book{
    friend std::istream &operator >>(std::istream& is,Book &b);
 friend   bool operator!=(const Book &a,const Book &b);
 friend   bool operator==(const Book &a,const Book &b);

    friend std::ostream &operator<<(std::ostream & os,const Book & b);
public :Book(int p,string i,string n):price(p),ISBN(i),name(n){}
    Book():price(0),ISBN(" "),name(" "){}
    Book &operator+=(const Book &b){
        price+=b.price;
        ISBN+=b.ISBN;
        name+=b.name;
        return *this;



    }
private :
    int price;
    string ISBN;
    string name;



};
bool operator!=(const Book &a,const Book &b)
{
    return !(a==b);


}

bool operator==(const Book &a,const Book &b)
{
    if(a.price==b.price&&a.name==b.name&&a.ISBN==b.ISBN)
    return true;
    else return false;


}

Book operator+(Book &a ,Book & b)
{
    Book c=a;
    c+=b;

    return c;
}

std::istream &operator >>(std::istream& is,Book &b)
{

    is>>b.price>>b.ISBN>>b.name;
    if(!is)
        b=Book();
    return is;


}



std::ostream &operator<<(std::ostream & os,const Book & b)
{





    os<<"price:"+to_string(b.price);
    os<<";ISBN:"+b.ISBN;
    os<<";name:"+b.name;
    return os;
}







int main(){
    Book a(10,"123456","上册");
    Book b(10,"123456","上册");


    cout<<(a==b);





}
