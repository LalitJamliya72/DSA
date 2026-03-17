#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool ans = true;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            ans=false;
            break;
        }
    }
    if(ans){
        cout<<"Prime hai";
    }
    else{
        cout<<"Not prime";
    }
   return 0;
}