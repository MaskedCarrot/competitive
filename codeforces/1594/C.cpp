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
    int n;
    char ch;
    cin>>n>>ch;
    string str;
    cin>>str;

    for (int i= 1;i<=n;i++) {
        int j;
        for (j = i;j<=n; j+= i) {
            if (str[j-1] != ch) {
                //cout<<"breaking sequence for i = "<<i<<endl;
                break;
            }
        }

        if (j > n) {
            if (i == 1) {
                cout<<0<<endl;
            } else {
                cout<<1<<endl;
                cout<<i<<endl;
            }
            return;
        }
        
    }
    cout<<2<<endl;
    cout<<n<<' '<<n-1<<endl;
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