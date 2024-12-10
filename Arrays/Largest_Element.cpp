#include<iostream>
using namespace std;
int largest(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={2,5,1,3,90,0};
    int n=5;
    int max=largest(arr,n);
    cout<<max;
    return 0;
}