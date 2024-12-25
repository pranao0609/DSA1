#include<iostream>
#include<vector>
using namespace std;

int smallest(vector<int>& v){
    int min=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    return min;

}
int main(){
    int n;
    cout<<"Enter Number of Elements in array : ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter element : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"The elements are : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int min=smallest(v);
    cout<<"Smallest Element is : "<<min;
    return 0;

}