#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0, last_count = 0, r =0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;

            if (count > last_count){
                r = count;
            }
        }

        else
        {
            last_count = r;
            count = 0;
        }

    }

    cout << r << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}