#include<iostream>
using namespace std;
int square(int n){
    int c = n*n;
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<square(n);
   return 0;
}