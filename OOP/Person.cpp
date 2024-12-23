#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    public:
    Person(){
        name="";
    }
    void getdata(){
        cout<<"Name";
        cin>>name;
    }
    void display(){
        cout<<name;
    }
};
int main(){
    cout<<"hi";
    int n;
    cin>>n;
    Person P[100];
    for(int i=0;i<n;i++){
        P[i].getdata();
    }
    for(int i=0;i<n;i++){
        P[i].display();
    }
    return 0;
}
