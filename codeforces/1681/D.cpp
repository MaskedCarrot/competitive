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

pair<ll,ll> getData(ll x) {
    ll maxD = INT_MIN;
    ll c = 0;
    while (x > 0) {
        c++;
        ll d = x%10;
        maxD = max(d, maxD);
        x /= 10;
    }

    return make_pair(c, maxD);
}

int getDigitCount(ll x) {
    int c = 0;
    while (x > 0) {
        x /= 10;
        c++;
    }
    return c;
}

int checkAllOnes(ll x) {
    while (x > 0) {
        int d = x%10;
        if (x!=1) return false;
        x /= 10;
    }
    return true;
}

void solve() {
    ll n, x;
    cin>>n>>x;  
    int ans = 0;
    if (checkAllOnes(x)) {
        ans = -1;
    } else if (getDigitCount(x) == n) {
        ans = 0;
    } else {
        queue<ll> q;
        unordered_map<ll,ll> done_number;
        q.push(x);
        while (!q.empty()) {
            bool foundAns = false;
            ll size = q.size();
            ans++;
            while (size--) {
                ll num = q.front();
                q.pop();
                if (done_number[num]) continue;
                else done_number[num] = true;
                // cout<<"checking for "<<num<<" iterations "<<ans<<endl;
                unordered_map<int,bool> done;
                done[0] = true;
                done[1] = true;
                ll t = num;
                while (t > 0) {
                    ll d = t%10;
                    if (!done[d]) {
                        done[d] = true;
                        ll newD = num*d;
                        if (getDigitCount(newD) == n) {
                            foundAns = true;
                            break;
                        } else if (getDigitCount(newD) > n) {
                            continue;
                        } else {
                            q.push(newD);
                        }
                    }
                    t /= 10;
                }
            }

            if (foundAns) break;
            
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
    // cin >> t;
    while (t--) {
        //std::cout << "Case #"<<a<<": ";
        a++;
        solve();
    }
    return 0;
}
