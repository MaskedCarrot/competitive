#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

ll power(ll x, ll y)
{
    ll res = 1;

    while (y)
    {
        if (y % 2 == 1)
            res = res * x % mod;

        y = y / 2;

        x = (x * x) % mod;
    }
    return res;
}

bool isPerfectSquare(ll x)
{
    ll left = 1, right = x;

    while (left <= right)
    {
        ll mid = (left + right) / 2;

        if (mid * mid == x)
        {
            return true;
        }

        if (mid * mid < x)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }
    return false;
}

void solve()
{
    set<string> t;
    ll n;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        string st = "";
        st += str[i];
        t.insert(st);
    }

    for (int i = 0; i < n - 1; i++)
    {
        string st = "";
        st += str[i];
        st += str[i + 1];
        t.insert(st);
    }

    for (int i = 0; i < n - 2; i++)
    {
        string st = "";
        st += str[i];
        st += str[i + 1];
        st += str[i + 2];
        t.insert(st);
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        string st = "";
        st += i;
        if (!t.count(st) > 0)
        {
            cout << st << endl;
            return;
        }
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        string st = "";
        st += i;
        for (char j = 'a'; j <= 'z'; j++)
        {
            string ans1 = st;
            ans1 += j;
            if (!t.count(ans1) > 0)
            {
                cout << ans1 << endl;
                return;
            }
        }

    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        string st = "";
        st += i;
        for (char j = 'a'; j <= 'z'; j++)
        {
            string ans1 = st;
            ans1 += j;
            for (char k = 'a'; k <= 'z'; k++)
            {
                string ans2 = ans1;
                ans2 += k;
                if (!t.count(ans2) > 0)
                {
                    cout << ans2 << endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    ll a = 0;
    cin >> t;
    while (t--)
    {
        //std::cout << "Case #" << a+1 <<": ";
        //a++;
        solve();
    }
    return 0;
}

//                     __  __           _            _    ____                     _
//                    |  \/  | __ _ ___| | _____  __| |  / ___|__ _ _ __ _ __ ___ | |_
//                    | |\/| |/ _` / __| |/ / _ \/ _` | | |   / _` | '__| '__/ _ \| __|
//                    | |  | | (_| \__ \   <  __/ (_| | | |__| (_| | |  | | | (_) | |_
//                    |_|  |_|\__,_|___/_|\_\___|\__,_|  \____\__,_|_|  |_|  \___/ \__|
//                  =====================================================================
