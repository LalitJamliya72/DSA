#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks<=90){
        cout<<"A grade";
    }
    else if(marks<=75){
        cout<<"B grade";
    }
    else if(marks<=50){
        cout<<"C grade";
    }
    else{
        cout<<"d grade";
    }
   return 0;
}