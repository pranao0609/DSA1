#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    //Creating And Writing File
    ofstream outFile("example.txt");
    if(!outFile){
        cerr<<"Error"<<endl;
        return 1;
    }
    outFile<<"Hello,This is a Text File"<<endl;

    cout<<"File created and written successfully";
    outFile.close();


    //Reading File
    ifstream inFile("example.txt");
    if(!inFile){
        cerr<<"Error Opening File"<<endl;
        return 1;
    }
    string line;
    cout<<"Reading From file";
    while(getline(inFile,line)){
        cout<<line;
    }
    inFile.close();


    //Appending File
    ofstream appendFile("example.txt",ios::app);
    if(!appendFile){
        cerr<<"Error Opening file for appending"<<endl;
        return 1;
    }
    appendFile<<"This Line is Appended"<<endl;
  
    cout<<"Appended successfully";
    outFile.close();

    //Deleting
    const char* filename ="example.txt";
    if(remove(filename)==0){
        cout<<"File Deleted Successfully"<<endl;
    }else{
        cerr<<"Error";
    }

    //Renaming
    const char* oldfile = "example.txt";
    const char* newfile = "example1.txt";
    if(rename(oldfile,newfile)==0){
        cout<<"File Renamed Successfully"<<endl;
    }else{
        cerr<<"Error";
    }
}