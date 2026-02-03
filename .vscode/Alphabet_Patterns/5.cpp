#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=i;j>=1;j--){
            int d= a+68;
            char ch = (char)d;
            cout<<ch<<" ";
            a++5;
        }
        cout<<endl;
    }
   return 0;
}