#include<iostream>
#include<vector>
using namespace std;
vector<int> inverse(int n){
    vector<int> num;
    while(n!=0){
        int k = n%10;
        num.push_back(k);
        n/=10;
    }
    return num;
}
int main()
{
    int n;
    cin>>n;
    vector<int> num=inverse(n);
    vector<int> ans(num.size()+1);
    for(int i=0;i<num.size();i++){
        ans[num[i]]=i+1;
    }
    for(int i=num.size();i>=1;i--){
        cout<<ans[i];
    }
   return 0;
}