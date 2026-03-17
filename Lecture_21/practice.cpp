#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long k = 0;
    long s = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 0)
        {
            digit = 5;
        }
        k = k * 10 + digit;
        n /= 10;
    }
    while (k > 0)
    {
        long d = k % 10;
        s = s * 10 + d;
        k /= 10;
    }
    cout << s << endl;

    return 0;
}