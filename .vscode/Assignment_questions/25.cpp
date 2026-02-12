#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n = (m+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-2;j++){
            cout<<"  ";
        }
        if(i!=1){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }
        cout<<endl;
    }
     for(int i=n-1;i>=1;i--){
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-2;j++){
            cout<<"  ";
        }
        if(i!=1){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }
        cout<<endl;
    }
   return 0;
}