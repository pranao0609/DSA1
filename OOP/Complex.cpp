#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int r,int i){
        real=r;
        img=i;
    }
    Complex operator+(const Complex &other){
        return Complex(real+other.real,img+other.img);
    }
    Complex operator*(const Complex &other){
        return Complex(real*other.real-img*other.img,real*other.img+img*other.real);
    }
    friend istream& operator>>(istream& in,Complex& c ){
        in>>c.real>>c.img;
        return in;
    }
    friend ostream& operator<<(ostream& out,const Complex& c){
        out<<c.real<<"+"<<c.img<<"i";
        return out;
    }
};
int main(){
    Complex c1,c2;
    cin>>c1;
    cin>>c2;
    cout<<c1+c2;
    cout<<c1*c2;
    return 0;
}