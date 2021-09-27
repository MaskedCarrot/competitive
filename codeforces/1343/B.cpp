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
  
void solve() {
    ll n;
    cin>>n;
    ll nn = n/2;
    if (nn&1) {
        no;
        return;
    }
    vector<ll>v1;
    vector<ll> v2;
    ll sum1 = 0;
    ll sum2 = 0;
    ll i =2;
    while (v1.size() < nn) {
        v1.push_back(i);
        i = i+2;
        sum1 += v1.back();
    }

    i = 1;
    while (v2.size() < nn-1) {
        v2.push_back(i);
        i += 2;
        sum2 += v2.back();
    }
    v2.push_back(sum1-sum2);
    yes;

    for (i =0;i<v1.size();i++) {
        cout<<v1[i]<<" ";
    }
    for (i=0;i<v2.size();i++) {
        cout<<v2[i]<<' ';
    }
    
    cout<<endl;
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
    while (t--)
    {
        //std::cout << "Case #"<<a<<": ";
        a++;
        solve();
    }
    return 0;
}

//                     __  __           _            _  ____                     _
//                    |  \/  | __ _ ___| | _____  __| |/ ___|__ _ _ __ _ __ ___ | |_
//                    | |\/| |/ _` / __| |/ / _ \/ _` | |   / _` | '__| '__/ _ \| __|
//                    | |  | | (_| \__ \   <  __/ (_| | |__| (_| | |  | | | (_) | |_
//                    |_|  |_|\__,_|___/_|\_\___|\__,_|\____\__,_|_|  |_|  \___/ \__|
//                  ===================================================================
