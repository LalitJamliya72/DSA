#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = (n+1)/2;
   for(int i=m;i>=1;i--){
    for(int j=1;j<=m-i;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<j%2<<" ";
    }
    for(int j=i-1;j>=1;j--){
        cout<<j%2<<" ";
    }
     for(int j=1;j<=m-i;j++){
        cout<<"  ";
    }
    cout<<endl;
   }
   for(int i=2;i<=m;i++){
    for(int j=1;j<=m-i;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<j%2<<" ";
    }
    for(int j=i-1;j>=1;j--){
        cout<<j%2<<" ";
    }
     for(int j=1;j<=m-i;j++){
        cout<<"  ";
    }
    cout<<endl;
   }
   
   return 0;
}