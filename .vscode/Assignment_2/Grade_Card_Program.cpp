#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A";
    }
    else if(marks>=75){
        cout<<"Grade B";
    }
    else{
        cout<<"Grade C";
    }
   return 0;
}