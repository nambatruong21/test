#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("APPLES.INP", "r", stdin);
    freopen("APPLES.OUT", "w", stdout);
    int n, m, a;
    cin >> n >> m >> a;
    vector<int> p(a);
    for (int i = 0; i < a; ++i) cin >> p[i];
    int b = m;
    int d = 0;
    for (int i = 0; i < a; ++i)
    {
        int t = p[i];
        if (t <= b - m + 1)
        {
            d += b - m + 1 - t;
            b = t + m - 1;
        }
        else if (t > b)
        {
            d += t - b;
            b = t;
        }
    }
    cout << d;
    return 0;
}
