#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> leftproduct(n,1);
    vector<int> rightproduct(n,1);
    vector<int> ans(n);
    for(int i=1;i<n;i++){
            leftproduct[i]=leftproduct[i-1]*arr[i-1];
        }
        for(int i=n-2;i>=0;i--){
            rightproduct[i]=rightproduct[i+1]*arr[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=leftproduct[i]*rightproduct[i];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }


   return 0;
}