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
        string num;
        cin>>num;
        // case 1 00 or 50
        int i  = num.size()-1;
        int flag = 0;
        int c = 0;
        int ans = INT_MAX;
        if (num.substr(num.size()-2) == "25" || num.substr(num.size()-2) == "00" ||
         num.substr(num.size()-2) == "50" || num.substr(num.size()-2) == "75" ) {
            cout<<0<<endl;
            return;
        }
        while (i > -1 && flag < 2) {
            if (num[i] == '0') {
                flag++;
                i--;
            } else if(num[i] == '5' && flag == 1) {
                flag++;
                i--;
            } else {
                i--;
                c++;
            }
        }
        ans = min(ans,c);
        i = num.size()-1;
        flag = 0;
        c = INT_MAX;
        while (i > -1 && flag < 2) {
            if (num[i] == '5' && flag == 0) {
                flag++;
                i--;
            }
            else if((num[i] == '2' || num[i] == '7') && flag == 1) {
                flag++;
                i--;
            } else {
                i--;
                if (c == INT_MAX) c = 1;
                else c++;
            }
        }
        ans = min(ans, c);
        cout<<ans<<endl;
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