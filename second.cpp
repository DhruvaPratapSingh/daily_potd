#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int xc;
        int yc;
        if (a % c == 0)
        {
            xc = a / c;
        }
        else
        {
            xc = (a / c) + 1;
        }

        if (b % c == 0)
        {
            yc = b / c;
        }
        else
        {
            yc = (b / c) + 1;
        }
        int mini = min(xc, yc);

        int maxi = max(xc, yc);
        int result = mini + maxi + (maxi - mini);

        if (xc > yc)
        {
            result--;
        }
        cout << result << endl;
    }
    return 0;
}