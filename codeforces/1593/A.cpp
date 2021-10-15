    #include <bits/stdc++.h>
    using namespace std;

    #define mod 1'000'000'007
    typedef long long int ll;
    #define no std::cout << "No\n"
    #define yes std::cout << "Yes\n"


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
        int a,b,c;
        cin>>a>>b>>c;
        int aa = max(b,c);
        if (aa < a) cout<<0<<' ';
        else cout<<aa-a+1<<' ';
        aa = max(a,c);
        if (aa < b) cout<<0<<' ';
        else cout<<aa-b+1<<' ';
        aa = max(a,b);
        if(aa < c) cout<<0<<' ';
        else cout<<aa-c+1<<' ';
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
            // std::cout << "Case #"<<a<<": ";
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