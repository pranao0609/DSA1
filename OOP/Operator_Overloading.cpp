#include<iostream>
using namespace std;

class Complex{
public:
    double real;
    double img;

    Complex(double r , double i){
        real=r;
        img=i;
    }

    Complex operator +(const Complex& c){
        return Complex(real+c.real,img=c.img);
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(3.5,2.6),c2(1.5,4.5);
    Complex c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
return 0;
}

