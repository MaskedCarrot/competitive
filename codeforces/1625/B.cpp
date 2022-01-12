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


ll power(ll x, ll y) {
    ll res = 1;
    
    while (y)
    {
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

unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
    
    // traversing bits of 'n' from the right
    while (n > 0)
    {
        // bitwise left shift 
        // 'rev' by 1
        rev <<= 1;
        
        // if current bit is '1'
        if (n & 1 == 1)
            rev ^= 1;
        
        // bitwise right shift 
        // 'n' by 1
        n >>= 1;
            
    }
    
    // required number
    return rev;
}

void solve() {
    int n;
    cin>>n;
    int arr[n];
    map<int,vector<int>> m;
    for (int i =0;i<n;i++) {
        cin>>arr[i];
        m[arr[i]].push_back(i);
    }
    
    int ans = INT_MAX;
    for (auto x: m) {
        int val = x.first;
        vector<int> vec = x.second;
        for (int i =0;i<vec.size()-1;i++) {
            ans = min(ans, vec[i+1] - vec[i]);
        }
    }


    if (ans == INT_MAX) cout<<-1<<endl;
    else cout<<n-ans<<endl; 
}

int main() {
    //freopen("consistency_chapter_1_input.txt", "r", stdin);
    //freopen("consistency_out.txt", "w", stdout);
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
