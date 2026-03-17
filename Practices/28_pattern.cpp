// * * * * * 
// * *   * *
// *       *
// * *   * *
// * * * * *

#include<iostream>
using namespace std;
int main()
{
 int m;
 cin>>m;
 int N = (m+1)/2;
 for(int i=1;i<=N;i++){
    for(int j=1;j<=N-i+1;j++){
        cout<<"* ";
    }
    for(int j=2;j<=2*i-2;j++){
        cout<<"  ";
    }
    if(i!=1){
     for(int j=1;j<=N-i+1;j++){
        cout<<"* ";
    }
}
else{
    for(int j=1;j<=N-1;j++){
        cout<<"* ";
    }
}
    cout<<endl;
 }
 for(int i=N-1;i>=1;i--){
    for(int j=1;j<=N-i+1;j++){
        cout<<"* ";
    }
    for(int j=2;j<=2*i-2;j++){
        cout<<"  ";
    }
    if(i!=1){
     for(int j=1;j<=N-i+1;j++){
        cout<<"* ";
    }
}
else{
    for(int j=1;j<=N-1;j++){
        cout<<"* ";
    }
}
    cout<<endl;
 }
   return 0;
}