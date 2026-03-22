#include<iostream>
using namespace std;
int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s<k)
                break;
                if(j!=m-1)
                    s--;
                if(arr[i][j]=='.')
                    s-=2;
               else if(arr[i][j]=='*')
                s+=5;
                else if(arr[i][j]=='#'){
                    s+=1;
                    break;
                }
            }
    }
    if(s>=k){
        cout<<"yes"<<endl;
        cout<<s;
    }
    else{
        cout<<"No";
    }
   return 0;
}