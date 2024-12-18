#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll timeTakenByA = a - 1;
    ll timeTakenByB = abs(b - c) + abs(c - 1);

    if (timeTakenByA < timeTakenByB)
        cout << 1 << nline;
    else if (timeTakenByA > timeTakenByB)
        cout << 2 << nline;
    else
        cout << 3 << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
}