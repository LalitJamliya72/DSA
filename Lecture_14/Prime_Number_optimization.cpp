#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool ans = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << "Prime nahi hai";
    }
    else
    {
        cout << "Prime hai";
    }
    return 0;
}