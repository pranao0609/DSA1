#include<iostream>
using namespace std;
int main(){
    int a[]={1,1,1,2,2,3,4,4};
    int n=8;
    int i=a[0];
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            i++;
            a[i]=a[j];
        }
    }
    for(int k=0;k<=i;k++){
        cout<<a[k]<<endl;
    }
    return 0;
}