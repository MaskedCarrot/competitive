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

void printIt(int n , int m) {
    for(int i =0;i<n;i++) {
        for(int j =0;j<m;j++) {
            if(i%2 == 0) {
                if(j%2 == 0) {
                    cout<<'W';
                } else {
                    cout<<'R';
                }
            } else {
                if(j%2 == 0) {
                    cout<<'R';
                } else {
                    cout<<'W';
                }
            }
        }
        cout<<endl;
    }
}


void printIt2(int n , int m) {
    for(int i =0;i<n;i++) {
        for(int j =0;j<m;j++) {
            if(i%2 == 0) {
                if(j%2 == 0) {
                    cout<<'R';
                } else {
                    cout<<'W';
                }
            } else {
                if(j%2 == 0) {
                    cout<<'W';
                } else {
                    cout<<'R';
                }
            }
        }
        cout<<endl;
    }
}


void solve() {
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i =0;i<n;i++) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if(n == 1) {
        cout<<v[0]<<endl;
        return;
    }
    ll s= 0;
    if(v[0] > v[1]) {
        s += v[0] - v[1];
        v[0] = v[1];
    }

    for(ll i = 1;i <n-1;i++) {
        if(v[i] > v[i+1] && v[i] > v[i-1]) {
            ll d = max(v[i+1], v[i-1]);
            s += v[i]-d;
            v[i] = d;
            
        }
    }

    if(v[n-2] < v[n-1]) {
        s += v[n-1]-v[n-2];
        v[n-1] = v[n-2];
    }

    

    ll sum = s+v[0]+v[n-1];
    for(int i =1;i<n;i++) {
        sum += abs(v[i]-v[i-1]);
    }

    cout<<sum<<endl;;
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

//                     __  __           _            _  ____                     _
//                    |  \/  | __ _ ___| | _____  __| |/ ___|__ _ _ __ _ __ ___ | |_
//                    | |\/| |/ _` / __| |/ / _ \/ _` | |   / _` | '__| '__/ _ \| __|
//                    | |  | | (_| \__ \   <  __/ (_| | |__| (_| | |  | | | (_) | |_
//                    |_|  |_|\__,_|___/_|\_\___|\__,_|\____\__,_|_|  |_|  \___/ \__|
//                  =====================================================================

