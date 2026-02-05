#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b){
     cout<<"a is greater";
    }
    else{
         cout<<"b is greater";
    }
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    max(a,b);
   return 0;
}