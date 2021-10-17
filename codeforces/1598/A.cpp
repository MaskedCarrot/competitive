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


    bool helper(vector<vector<char>> &v, int i, int j, int n) {
        if (i < 0 || j < 0 || i >= 2 || j >= n || v[i][j] != '0') {
            return false;
        }
        
        if (i == 1 && j == n-1) return true;

        v[i][j] = '2';

        return helper(v, i+1, j, n) || helper(v, i+1, j+1, n) || helper(v, i, j+1, n) ||
        helper(v, i-1, j-1, n) || helper(v, i-1, j, n) || helper(v, i, j-1, n) || helper(v, i-1, j+1, n) || helper(v, i+1, j-1, n);

    } 

    void solve() {
        int n;
        cin>>n;
        vector<vector<char>> v(2, vector<char>(n));

        for (int i =0;i<n;i++) {
            char x;
            cin>>x;
            v[0][i] = x;
        }


        for (int i =0;i<n;i++) {
            char x;
            cin>>x;
            v[1][i] = x;
        }

        if (v[1][n-1] == '1') no;

        if (helper(v, 0, 0, n)) yes;
        else no;
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