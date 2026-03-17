#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    int found = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                found = 1;
            }
        }
    }
    cout<<found;
   return 0;
}