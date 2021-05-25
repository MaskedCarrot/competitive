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

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
  

void solve() {
    ll N;
    cin>>N;
    ll arr[N];
    vector<ll> p1;
    vector<ll> n1;
    ll p = 0, n = 0, z = 0;
    for(ll i = 0;i<N;i++) {
        cin>>arr[i];
        if(arr[i] == 0)
        z++;
        else if(arr[i] < 0) {
            n1.push_back(arr[i]);
        }
        else if(arr[i] > 0) {
            p1.push_back(arr[i]);
        }
    }
    sort(n1.begin(),n1.end(), greater <>());
    sort(p1.begin(),p1.end());
    ll m;

    if(n1.size() == 0) {
        if(z > 1) {
            cout<<z<<endl;
            return;
        }
        else {
            cout<<1<<endl;
            return;
        }
    }
    if(z > 1) {
        cout<<n1.size()+z<<endl;
        return;
    }
    
    if(p1.size() > 0) {
        m = p1[0];
    }
    else if(z > 0) 
        m = 0;
    else 
        m = *(n1.end()-1);
    
    ll c = 0;
    if(m <= 0) 
        c = z+n1.size();

    else {
        bool check = true;
        if(abs(*(n1.end()-1)) < m && z > 0) 
            check = false;
        for(int i =0;i<n1.size()-1;i++) {
            if(abs(n1[i]-n1[i+1]) < m) {
                check = false;
                break;
            }
        }
        if(check)
            c = z+n1.size()+1;
        else 
            c = z+n1.size();
    }
    cout<<c<<endl;
}   


int main() {
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
