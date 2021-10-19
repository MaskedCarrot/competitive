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

    static bool mySort(pair<int,int> a, pair<int,int> b) {
        return a.first < b.first;
    }

    static bool mySort2(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }

    void solve() {
        int n;
        cin>>n;
        int arr[n];
        for (int i =0;i<n;i++)
            cin>>arr[i];

        sort(arr, arr+n);

        vector<int> s1;
        vector<int> s2;

        for (int i =0;i<n;i++) {
            if (s1.size() == 0 || s1.back() != arr[i]) {
                s1.push_back(arr[i]);
            } else if (s2.size() == 0 || s2.back() != arr[i]) {
                s2.push_back(arr[i]);
            } else {
                no;
                return;
            }
        }

        yes;
        cout<<s1.size()<<endl;
        for (int i=0;i <s1.size();i++) {
            cout<<s1[i]<<' ';
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        if (s2.size() > 0) reverse(s2.begin(), s2.end());
        for (int i =0;i<s2.size();i++) {
            cout<<s2[i]<<' ';
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
        //cin >> t;
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