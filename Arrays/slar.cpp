#include<iostream>
#include<vector>
using namespace std;

int smallest(vector<int> &v){
    int ssmal=-1;
    int smal=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]<smal){
            ssmal=smal;
            smal=v[i];
        }
    }
    return ssmal;
}

int largest(vector<int> &v){
    int slar=-1;
    int lar=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>lar){
            slar=lar;
            lar=v[i];
        }
    }
    return slar;
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
    int max=largest(v);

    cout<<"Second Smallest Element is : "<<min<<endl;;
    cout<<"Second largest Element is : "<<max;

    return 0;

}