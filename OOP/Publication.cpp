#include<iostream>
#include<string>
using namespace std;
class Publication{
    private:


    public:
    void add(){

    }
    void display(){


    }
};
class Book : public Publication{
    private:

    public:
    void addbook(){
        add();

    }
    void display(){
        display();
    }
};
class Tape : public Publication{
    private:

    public:
    void addTape(){
        add();

    }
    void display(){
        display();

    }
};
int main(){
    Book bk[10];
    Tape ts[10];
    inch ch,b=0,t=0;
    do{

    }try{
        switch(ch){
            case 1:
                bk[b].addbook();
                b++
        }
    }
}