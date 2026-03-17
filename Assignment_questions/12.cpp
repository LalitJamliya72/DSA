#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int i=n;i>=1;i--){
          int d = n%10;
          sum = sum+d;
          n/=10;
        }
         cout<<sum;
   return 0;
}