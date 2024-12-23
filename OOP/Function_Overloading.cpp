#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

float square(float x){
    return x*x;
}


int main(){
    cout<<square(5);
    cout<<square(4.4f);
    return 0;
}launder