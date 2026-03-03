#include <iostream>
#include <vector>
using namespace std;
vector<int> convert(int n)
{
    vector<int> number;
    while (n != 0)
    {
        int k = n % 10;
        number.push_back(k);
        n = n / 10;
    }
    return number;
}
int main()
{
    int n;
    cin >> n;
    vector<int> num = convert(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    vector<int> ans(num.size() + 1);
    for (int i = 0; i < num.size(); i++)
    {
        ans[num[i]] = i + 1;
    }
    for (int i = num.size(); i >= 1; i--)
    {
        cout << ans[i];
    }
    return 0;
}