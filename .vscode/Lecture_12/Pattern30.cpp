#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = (n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             if(i>=2 && i<=n-1 && j>=2 && j<=n-1){
                if(i==m && j==m) {
                    cout<<"@ ";
             }
             else{
                cout<<"# ";
                }
            }
             else{
                cout<<"* ";
            }
        }
         cout<<endl;
    }
   return 0;
}