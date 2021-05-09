#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

bool isEven(ll n) {
    return n%2 != 0;
}

ll countNum(ll r , ll g, ll b , ll w) {
    ll count = 0;
    if(isEven(r))
        count++;
    if(isEven(g))
        count++;
    if(isEven(b))
        count++;
    if(isEven(w))
        count++;
    return count;
}


ll min(ll r , ll g, ll b) {
    ll c1 = min(r , g);
    return min(c1 , b);
}


void solve() {
    ll r , g , b , w;
    cin>>r>>g>>b>>w;
    ll c = countNum(r , g, b , w);
    if(c == 0 || c == 1) {
        yes;
        return;
    }
    if(r != 0 && g != 0 && b != 0) {
        r -= 1;
        b -= 1;
        g -= 1;
        w += 3;
    }
    c = countNum(r , g , b , w);
    if(c == 0 || c == 1) {
        yes;
        return;
    }
    no;
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
