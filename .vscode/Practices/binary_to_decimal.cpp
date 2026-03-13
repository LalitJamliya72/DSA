#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int g = 0;
    while(n>0){
        int d = n%10;
        sum = sum+d*pow(2,g);
        n/=10;
        g++;
    }
    cout<<sum;
   return 0;
}