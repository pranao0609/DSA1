#include<iostream>
#include<vector>
using namespace std;

int smallest(vector<int>& v){


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

    return 0;

}