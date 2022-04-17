/*

                            ``````````````````````````````````````````````````
                            ``````````````````````````````````````````````````
                            ```````````````````````````.-:///:-.``````````````
                            ```````````````````````./-:+o+oooooo/.````````````
                            ```````````````````````:++ssoooossss/`````````````
                            `````````````````````..:+oo/-:----:/.`````````````
                            ``````````````````.-:///++/:-..```````````````````
                            `````````````````-/++///////++:.``.```````````````
                            ````````````````:++++////+////++-///:`````````````
                            ```````````````-yyyysssoosoooooos+::s-```.````````
                            ````````````....osyyyyyyyyyyyyyys-..+s+//+....````
                            ``....`````....-++++ooossooooo++:....o+-.`.....```
                            ``............../////////::--+//-...`..........```
                            `...............-///+///:---:+/......`..........`.
                            .................:///////////:....................
                            ..................-/++++///:......................
                            ...............-.-+:--:+:..-+/....................
                            ``````````````.++o.````./://-/:```````````````````
                            ````````````````.........-.....```````````````````
                            ``````````````````.............```````````````````
                            ``````````````````````````````````````````````````
                            ``````````````````````````````````````````````````

                     __  __           _            _  ____                     _
                    |  \/  | __ _ ___| | _____  __| |/ ___|__ _ _ __ _ __ ___ | |_
                    | |\/| |/ _` / __| |/ / _ \/ _` | |   / _` | '__| '__/ _ \| __|
                    | |  | | (_| \__ \   <  __/ (_| | |__| (_| | |  | | | (_) | |_
                    |_|  |_|\__,_|___/_|\_\___|\__,_|\____\__,_|_|  |_|  \___/ \__|
                  ===================================================================

*/


#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"
#define vin(v, n) for (ll i = 0;i<n;i++) { ll x; cin>>x; v.push_back(x); }
#define all(x) x.begin(), x.end()

//#define TEST


ll power(ll x, ll y) {
    ll res = 1;
    
    while (y) {
        if (y % 2 == 1)
            res = res * x%mod;

        y = y/2;

        x = (x * x)%mod;
    }
    return res;
}

bool isPerfectSquare(ll x) {
    ll left = 1, right = x;
   
    while (left <= right) {
        ll mid = (left + right) / 2;
       
        if (mid * mid == x) {
            return true;
        }
       
        if (mid * mid < x) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }
    return false;
}

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

void solve() {
    int n, k;
    cin>>n>>k;

    string str;
    cin>>str;

    vector<int> ans(n);
    int j = k;
    if (k%2 == 0) {
        for (int i=0;i<n-1;i++) {
            if (k > 0 && str[i] == '0') {
                cout<<'1';
                ans[i] = 1;
                k--;
            } else {
                cout<<str[i];
                ans[i] = 0;
            }
        }

        if ((k%2 )== (j%2)) {
            cout<<str.back()<<endl;
        } else {
            cout<<(str.back()-'0'+1)%2<<endl;
        }
        ans[n-1] = k;
    } else {
        for (int i =0;i<n-1;i++) {
            if (k > 0 && str[i] == '1') {
                cout<<'1';
                ans[i] = 1;
                k--;
            } else {
                cout<<(str[i]-'0'+1)%2;
                ans[i] = 0;
            }
        }

        if ((k%2 )== (j%2)) {
            cout<<str.back()<<endl;
        } else {
            cout<<(str.back()-'0'+1)%2<<endl;
        }
        ans[n-1] = k;
    }
    for (int i=0;i<n;i++) cout<<ans[i]<<' ';
    cout<<endl;
}

int main() {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("errors.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    ll a = 1;
    cin >> t;
    while (t--) {
        //std::cout << "Case #"<<a<<": ";
        a++;
        solve();
    }
    return 0;
}
