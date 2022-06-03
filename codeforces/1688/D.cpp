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
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        vector<ll> v;
        vin(v, n);
     
        
        ll off = 0;
        if (n > k) {
            ll ans = (k*(k-1))/2;
            vector<ll> v1(n+1, 0);
            for (int i=0;i<n;i++) {
                v1[i+1] = v[i] + v1[i];
            }



            ll cur = 0;
            for (ll i=1;i<=n;i++) {
                ll z = 0;
                int l = max(z, i-k);
                int r = min(n, i+k-1);
                ll a1 = v1[i]-v1[l];
                ll a2 = v1[r]-v1[i-1];
                //cout<<"for i = "<<i<<" left = "<<a1<<' '<<"right = "<<a2<<endl;

                cur = max({cur, a1, a2});
                
            }
            ans += cur;
            cout<<ans<<endl;

        } else {
            ll ans = (n*(n-1))/2;
            for (int i=0;i<n;i++) {
                ans += v[i];
            }
            k -= n;
            ans += (n)*k;
            cout<<ans<<endl;
        }
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