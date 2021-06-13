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


int findNext(int arr[], int n) {
    while(true) {

    }
}

void solve() {
    int n;
    cin>>n;
    map<int, int> m;
    set<int> s;
    int arr[n];
    for(int i =0;i<n;i++) {
        cin>>arr[i];
    }
    int arr2[n];
    for(int i =0;i<n;i++) {
        cin>>arr2[i];
        m[arr[i]]  = arr2[i];
        s.insert(arr[i]);
        
    }

    ll count = 0;
    int i =0;
    int target = arr[0];
    int d = m[arr[0]];
    while(s.size() > 0) {
            int t = m[d];
            if(t == target) {
                count = count + 1;
                s.erase(d);
                s.erase(target);
                target = *(s.begin());;
                d = m[target];
            } else {
                s.erase(d);
                d = t;
            }
            
        }
        ll m1 = power(2, count);
        
        cout<<m1<<endl;
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

