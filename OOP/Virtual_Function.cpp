#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout<<"Drawing Shape";
        }
};

class Circle : public Shape{
    public:
        void draw() override{
            cout<<"Drawing Circle";
        }
};

class Rectangle : public Shape{
    public:
        void draw() override{
            cout<<"Drawing Rectangle";
        }
};

int main(){
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    shape1-> draw();
    shape2-> draw();
return 0;
}