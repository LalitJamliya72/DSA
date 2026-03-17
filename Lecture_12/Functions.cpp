#include <iostream>
using namespace std;
// No argument no return
void greet()
{
    cout << "Hello" << endl;
}
//  argument no return
void great(string name)
{
    cout << "Hello" << name << endl;
}
// No argument Return
int sub()
{
    int a = 14;
    int b = 6;
    int c = a - b;
    return c;
}
// argument return
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    greet();
    great("Lalit");
    cout << sub() << endl;
    cout << add(8, 2);
    return 0;
}