#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count = 0;
    for(int i=1;i<=n;i++){
        count++;
          if(count==k){
         cout<<i<<endl;
          }
    }
   return 0;
}