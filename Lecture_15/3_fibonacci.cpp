#include<iostream>
using namespace std;
int fibbo(int g){
      if(g==0 or g==1){
        return g;
      }
      return fibbo(g-1)+fibbo(g-2);
}
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
    cout<<fibbo(k)<<" ";
    k++;
    }
    cout<<endl;
}
   return 0;
}