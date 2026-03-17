#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 2 && j <= n - 1)
            {
                cout << j << " ";
            }
            else if (i == 3 && j <= n - 1)
            {
                if (j == 2)
                {
                    cout << j + 1 << " ";
                    continue;
                }
                if (j == 3)
                {
                    cout << j * 2 << " ";
                    continue;
                }
                if (j == 4)
                {
                    cout << j - 1 << " ";
                    continue;
                }
                cout << j << " ";
            }
            else if (i == 4 && j <= n - 1)
            {
                if (j == 2)
                {
                    cout << j * 2 << " ";
                    continue;
                }
                if (j == 4)
                {
                    cout << j - 2 << " ";
                    continue;
                }
                cout << j << " ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}