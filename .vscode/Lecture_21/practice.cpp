#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
     int n = 1;
    int count = 0;
    while(count<n1){
        int a = 3*n+2;
        if(a%n2!=0){
            cout<<a<<endl;
            count++;
        }
        n++;
    }
   return 0;
}