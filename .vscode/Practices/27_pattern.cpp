//                   0 
//                 9 0 9
//               8 9 0 9 8
//             7 8 9 0 9 8 7
//           6 7 8 9 0 9 8 7 6
//         5 6 7 8 9 0 9 8 7 6 5 
//       4 5 6 7 8 9 0 9 8 7 6 5 4
//     3 4 5 6 7 8 9 0 9 8 7 6 5 4 3
//   2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2
// 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 

#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n = m-1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++){
            cout<<j<<" ";
        }
        if(i!=n or i==n){
            cout<<"0 ";
        }
        for(int j=n;j>=n-i+1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   return 0;
}