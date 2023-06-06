#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve()
{
    int n;
    string s;

    cin >> n >> s;
    int index=0;
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    index = j - i;
                    if (index % 2!= 0)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                }
                
            }
        }
        if (index % 2 == 0)
        {
            cout << "YES" << endl;
        }
    }
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}