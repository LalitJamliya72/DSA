#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = 0;
    int r = s.size();
    while(l<r){
        while(l<r and isalnum(s[l])){
            l++;
        }
        while(l<r and !isalnum(s[r])){
            r--;
        }
        if(tolower(s[l])!=tolower(s[r])){
            cout<<"false";
        }
        else{
            cout<<"true";
        }
        l++;
        r--;
    }
    
   return 0;
}