#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n = (m+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 or i==n or j==n  ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
    }
     for(int j=1;j<=n-1;j++){
        if(i==1 or i==n){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
     }
    
        cout<<endl;
}
 for(int i=n-1;i>=1;i--){
       
     for(int j=1;j<=n-1;j++){
        if(i==1 or i==n){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
     }
      for(int j=1;j<=n;j++){
            if(j==1 or i==n or j==n  ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
    }
    
        cout<<endl;
}


   return 0;
}