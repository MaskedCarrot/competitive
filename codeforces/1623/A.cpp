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

static bool mySort(pair<int,int> &a, pair<int,int> &b) {
    if (a.first > b.first) return false;
    else if (a.first < b.first) return true;
    else {
        if (a.second > b.second) return true;
        else return false;
    }
}

void solve() {
    int n,m,ra,rb,x,y;
    cin>>n>>m>>ra>>rb>>x>>y;
    
    if (x == ra || y == rb) {
        cout<<0<<endl;
        return;
    }

    int t1 = INT_MAX;
    if (x > ra) t1 = x-ra;
    else t1 = n-ra + n - x;

    int t2 = INT_MAX;
    if (y > rb ) t2 = y - rb;
    else t2 = m -rb + m - y;

    cout<<min(t1,t2)<<endl;

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