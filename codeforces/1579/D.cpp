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
  
void helper(vector<vector<char>> &v, int i, int j, int k) {
    int o = 0;
    int xx1 = i + k;
    int xx2 = i - k;
    int yy1 = j - k;
    int yy2 = j - k;
    if (xx1 < v.size() && xx2 < v.size() && xx1 >= 0 && xx2 >= 0 && yy1 < v[0].size() && yy2 < v[0].size() && yy1 >= 0 && yy2 >= 0) {
            return;
    }
    while (o < k) {
        int x1 = i-o;
        int x2 = i+o;
        int y1 = j-o;
        int y2 = j-o;
        if (v[x1][y1] != '*' || v[x2][y2] != '*') {
            cout<<"no for "<<i<<' '<<j<<endl;
            return;
        }
        o++;
    }

    o = 0;
    while (o < k) {
        int x1 = i-o;
        int x2 = i+o;
        int y1 = j-o;
        int y2 = j-o;
        v[x1][y1] = '1';
        v[x2][y2] = '1';
        o++;
    }
}
void solve() {
    ll n;
    cin>>n;
    priority_queue<pair<ll,ll>> pq;

    for (int i=0;i<n;i++) {
        ll x;
        cin>>x;
        pq.push(make_pair(x,i+1));
    }

    ll sum =0;
    vector<pair<ll,ll>> ans;
    while (pq.size() > 1) {
        pair<ll,ll> a = pq.top();
        pq.pop();
        pair<ll,ll> b = pq.top();
        pq.pop();
        if (b.first > 0) {
            sum++;
            ans.push_back(make_pair(a.second, b.second));
            b.first--;
            a.first--;
            if (a.first > 0) {
                pq.push(a);
            }
            if (b.first > 0)
                pq.push(b);
        }
    } 
    cout<<sum<<endl;
    for (auto i: ans) {
        cout<<i.first<<' '<<i.second<<endl;
    }
}
 
int main() {
    //freopen("code_in.txt", "r", stdin);
    //freopen("code_out.txt", "w", stdout);
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
