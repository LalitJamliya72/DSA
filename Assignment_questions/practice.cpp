#include<iostream>
using namespace std;
int main()
{
    int min,max,n;
    cin>>min>>max>>n;
    for(int i=min;i<=max;i++){
        int c = (5*(i-32))/9;
        cout<<c<<endl;
    }
   return 0;
}