#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int max = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            max = min(a[i] + a[j] + j - i, max);
        }
    }
    cout << max;

    return 0;
}