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
    int n;
    cin>>n;
    vector<int> v;
    vin(v, n);
    int ans = 0;
    int i = 0;
    int j = n-1;
    int a = 0;
    int b = 0;
    int  c = 0;
    while (i <= j) {
        if (a == b) {
            ans = max(ans, c);
            a += v[i];
            c++;
            i++;
        } else if (a > b) {
            while (i <= j && b < a) {
                c++;
                b += v[j];
                j--;
            }
        } else {
            while (i<=j && a < b) {
                c++;
                a += v[i];
                i++;
            }
        }
    }

    if (a == b) {
        ans = max(ans, c);
    }

    cout<<ans<<endl;
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
