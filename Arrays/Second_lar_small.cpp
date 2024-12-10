#include<iostream>
using namespace std;
int second_largest(int a[],int n){
    int lar=a[0];
    int slar=-1;
    for(int i=0;i<n;i++){
        if(a[i]>lar){
            slar=lar;
            lar=a[i];
        }else if(a[i]<lar && a[i]>slar){
            slar=a[i];
        }
    }
    return slar;
} 
int second_smallest(int a[],int n){
    int sma=a[0];
    int ssma=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<sma){
            ssma=sma;
            sma=a[i];
        }else if(a[i]>sma && a[i]<ssma){
            ssma=a[i];
        }
    }
    return ssma;
} 
int main(){
    int a[]={2,5,3,8,1};
    int n=5;
    int sl=second_largest(a,n);
    cout<<sl;
    int ss=second_smallest(a,n);
    cout<<ss;
    return 0;
}