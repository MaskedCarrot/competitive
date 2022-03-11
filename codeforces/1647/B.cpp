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
    int m;
    cin>>n>>m;
    int arr[n][m];

    for (int i= 0;i<n;i++) {
        for (int j =0;j<m;j++) {
            char ch;
            cin>>ch;
            arr[i][j] = ch-'0';
        }
    }


    for (int i = 0;i<n;i++) {
        //cout<<"checking "<<endl;
        for (int j =1;j<m;j++) {
            //cout<<"checking "<<j<<' '<<j-1<<endl;
            //cout<<arr[i][j-1]<<' '<<arr[i][j]<<endl;
            if (arr[i][j] == 1 && arr[i][j-1] == 1) {
                if (i-1 >= 0 && arr[i-1][j-1] != arr[i-1][j]) {
                    no;
                    return;
                } {
                    //cout<<"compared "<<j<<' '<<j-1<<endl;
                }
                if (i+1 < n && arr[i+1][j-1] != arr[i+1][j]) {
                    no;
                    return;
                }
            }
        }
    }

    for (int i = 0;i<m;i++) {
        for (int j =1;j<n;j++) {
            if (arr[j][i] == 1 && arr[j-1][i] == 1) {
                if (i-1 >= 0 && arr[j-1][i-1] != arr[j][i-1]) {
                    no;
                    return;
                }
                if (i+1 < m && arr[j-1][i+1] != arr[j][i+1]) {
                    no;
                    return;
                }
            }
        }
    }

    yes;
}


int main() {
    #ifdef TEST
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
