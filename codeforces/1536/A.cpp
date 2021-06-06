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
    map<int,int> m;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
        m[arr[i]]++;
        if(m[i] > 1) {
            no;
            return;
        }
    }
    vector<int> t;
    
    for(int i =0;i<n;i++) {
        for(int j =i ;j<n;j++) {
            if(j != i) {
                int d= abs(arr[i] - arr[j]);
                if(m[d] == 0) {
                    m[d]++;
                    t.push_back(d);
                }
            }
        }
    }
    if(t.size() == 0) {
        yes;
        cout<<arr.size()<<endl;
        for(int i=0 ;i<arr.size();i++) {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
        return;
    }

    int size = n+t.size();
    while(arr.size() <= 300) {
        
        if(t.size() == 0) {
            yes;
            cout<<arr.size()<<endl;
            for(int i=0 ;i<arr.size();i++) {
                cout<<arr[i]<<' ';
            }
            cout<<endl;
            return;
        }
        for(int i =0;i<arr.size();i++) {
            int d = abs(arr[i] - t[0]);
            if(m[d] == 0) {
                m[d]++;
                t.push_back(d);
            }
        }
        
        arr.push_back(t[0]);
        t.erase(t.begin());
    }

    no;
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