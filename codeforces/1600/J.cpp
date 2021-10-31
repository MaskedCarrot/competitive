/*

                            ``````````````````````````````````````````````````
                            ``````````````````````````````````````````````````
                            ```````````````````````````.-:///:-.``````````````
                            ```````````````````````./-:+o+oooooo/.````````````
                            ```````````````````````:++ssoooossss/`````````````
                            `````````````````````..:+oo/-:----:/.`````````````
                            ``````````````````.-:///++/:-..```````````````````
                            `````````````````-/++///////++:.``.```````````````
                            ````````````````:++++////+////++-///:`````````````
                            ```````````````-yyyysssoosoooooos+::s-```.````````
                            ````````````....osyyyyyyyyyyyyyys-..+s+//+....````
                            ``....`````....-++++ooossooooo++:....o+-.`.....```
                            ``............../////////::--+//-...`..........```
                            `...............-///+///:---:+/......`..........`.
                            .................:///////////:....................
                            ..................-/++++///:......................
                            ...............-.-+:--:+:..-+/....................
                            ``````````````.++o.````./://-/:```````````````````
                            ````````````````.........-.....```````````````````
                            ``````````````````.............```````````````````
                            ``````````````````````````````````````````````````
                            ``````````````````````````````````````````````````

                     __  __           _            _  ____                     _
                    |  \/  | __ _ ___| | _____  __| |/ ___|__ _ _ __ _ __ ___ | |_
                    | |\/| |/ _` / __| |/ / _ \/ _` | |   / _` | '__| '__/ _ \| __|
                    | |  | | (_| \__ \   <  __/ (_| | |__| (_| | |  | | | (_) | |_
                    |_|  |_|\__,_|___/_|\_\___|\__,_|\____\__,_|_|  |_|  \___/ \__|
                  ===================================================================

*/

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


int dfs(vector<vector<int>> &v, int i, int j) {
    if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size()) {
        //cout<<"can't go forward with this "<<i<<' '<<j<<endl;
        return 0;
    }

    if (v[i][j] == -1) return 0;

    int t = v[i][j];
    v[i][j] = -1;

    int sum = 1;
    if ((t&1) == 0) {
        sum += dfs(v, i , j-1);
    }
    if ((t&2) == 0) {
        sum += dfs(v, i+1, j);
    }
    if ((t&8) == 0) {
        sum += dfs(v, i-1, j);
    }
    if ((t&4) == 0) {
        sum += dfs(v,i, j+1);
    }
    return sum;
}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));

    for (int i =0;i<n;i++) {
        for (int j =0;j<m;j++) {
            int x;
            cin>>x;
            v[i][j] = x;
        }
    }

    vector<int> ans;
    for (int i =0;i<n;i++) {
        for (int j =0;j<m;j++) {
            if (v[i][j] != -1) {
                ans.push_back(dfs(v, i ,j));
            }
        }
    }



    sort(ans.begin(), ans.end(), greater<int>());

    for (int i =0;i<ans.size();i++) {
        cout<<ans[i]<<' ';
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
    while (t--) {
        //std::cout << "Case #"<<a<<": ";
        a++;
        solve();
    }
    return 0;
}
