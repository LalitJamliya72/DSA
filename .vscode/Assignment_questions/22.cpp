#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*(n-i)-1;j++){
            cout<<"  ";
        }
        if(i!=n){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
    }
    else{
        for(int j=n-1;j>=1;j--){
            cout<<j<<" ";
        }
    }
        cout<<endl;
    }
   return 0;
}