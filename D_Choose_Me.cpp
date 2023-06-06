#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void solve()
{
    int n = 0, towns = 0, av = 0, tv = 0;
    cin >> n;
    vector<pair<int, pair<int, int>>> vect(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i].second.first >> vect[i].second.second;
        vect[i].first = 2 * vect[i].second.first + vect[i].second.second; // we gotta sort our array by keeping in prefernce 2a+b 
        // not a+b as if you sort by creating a+b then you are assuming the responsibility of both a and b are equal but that's
        //  not the case because one value (aoki votes) are getting decreased by a and takahashi votes are getting increased by a+b
        //  hence the difference between them is increasing by 2a+b so we will sort according to the max(2a+b) so takahashi can win 
        // easily.
        av = av + vect[i].second.first;
    }
    sort(vect.begin(), vect.end());
    for (int i = 0; i < n; i++)
    {
        if (av >= tv)
        {
            towns++;
            av -= vect[n - i - 1].second.first;
            tv = tv + vect[n - i - 1].second.first + vect[n - i - 1].second.second;
        }
    }
    cout << towns;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    //   cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}