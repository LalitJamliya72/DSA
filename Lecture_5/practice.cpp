#include <iostream>
using namespace std;
int main() {
    int side1;
    cin>>side1;
    int side2;
    cin>>side2;
    int side3;
    cin>>side3;
    if(side1==side2 && side2==side3 && side1==side3){
        cout<<"Equilateral";
    }
    else if(side1==side2 || side2==side3 || side1==side3 ){
        cout<<"Isosceles";
    }
    else{
        cout<<"Scalene";
    }
    
    return 0;
}
