#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll a, b, l;
    cin >> a >> b >> l;
    // l=K.a^x b^y
    if (l % a != 0 && l % b != 0)
    {
        cout << 1;
        return;
    }
    int ans = 1;
    set<int> ok;
    if (l % b != 0)
    {
        ll power = 1;
        while (power <= l)
        {
            power = power * a;
            if (l % power == 0)
            {
                ok.insert(l / (power));
            }
        }
        cout << ok.size();
        return;
    }
    else if (l % a != 0)
    {
        ll power = 1;
        while (power <= l / 2)
        {
            power = power * b;
            if (l % power == 0)
            {
                ok.insert(l / (power));
            }
        }
        cout << ok.size();
        return;
    }
    // l is devisible by both a and b
    else
    {
        ll powera = a;
        ll powerb = b;
        // while (powera <= l) // y=0
        // {
        //     if (l % powera == 0)
        //     {
        //         ok.insert(1);;
        //     }
        //     powera = powera * a;
        // }
        // while (powerb <= l)
        // {
        //     if (l % powerb == 0)
        //     {
        //         ok.insert(1);;
        //     }
        //     powerb = powerb * b;
        // }
        powera = 1;
        powerb = 1;
        while (powera <= l)
        {
            powerb = 1;
            while (powerb <= l)
            {
                if (l % (powera * powerb) == 0)
                {
                    ok.insert(l / (powera * powerb));
                }
                powerb = powerb * b;
            }
            powera = powera * a;
        }
        cout << ok.size();
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}