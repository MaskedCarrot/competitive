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
    int n,m;
    cin>>n>>m;

    vector<vector<ll>> v(n, vector<ll>(m));

    vector<vector<ll>> v1(n+1, vector<ll>(m+1, 0));
    vector<vector<ll>> v2(n+1, vector<ll>(m+1, 0));
    vector<vector<ll>> v3(n+1, vector<ll>(m+1, 0));
    vector<vector<ll>> v4(n+1, vector<ll>(m+1, 0));

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int x;
            cin>>x;
            v[i][j] =x;
        }
    }

    for (int i=0;i<n;i++) {
        for (int j =0;j<m;j++) {
            v1[i+1][j+1] = v[i][j] + v1[i][j];
        }

        for (int j = m-1;j>=0;j--) {
            v2[i+1][j] = v[i][j] + v2[i][j+1];
        }
    }

    for (int i=n-1;i>=0;i--) {
        for (int j =0;j<m;j++) {
            v3[i][j+1] = v[i][j] + v3[i+1][j];
        }

        for (int j = m-1;j>=0;j--) {
            v4[i][j] = v[i][j] + v4[i+1][j+1];
        }
    }



    ll ans = 0;
    for (int i =0;i<n;i++) {
        for (int j = 0;j<m;j++) {
            ans = max(ans, v1[i+1][j+1]+v2[i+1][j]+v3[i][j+1]+v4[i][j]-v[i][j]-v[i][j]-v[i][j]);
        }
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
