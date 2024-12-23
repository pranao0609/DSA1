#include<iostream>
using namespace std;

void swapalternate(int a[],int size){
    for(int i=0;i<size;i+=2){
        if( i+1 < size){
            swap(a[i],a[i+1]);
        }
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int even[8]={4,3,6,7,1,2,5,0};
    int odd[5]={3,7,1,9,4};
    swapalternate(even,10);
    print(even,10);
}