#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

ll power(ll x, ll y) {
    ll res = 1;

    while (y) {
        if (y % 2 == 1)
            res = res * x % mod;

        y = y / 2;

        x = (x * x) % mod;
    }
    return res;
}

bool isPerfectSquare(ll x) {
    ll left = 1, right = x;

    while (left <= right)
    {
        ll mid = (left + right) / 2;

        if (mid * mid == x)
        {
            return true;
        }

        if (mid * mid < x)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }
    return false;
}

void solve() {
    int n;
    int m;
    int x;
    int y;
    cin>>n>>m>>x>>y;

    int x1, x2 , x3 ,x4;
    int y1 , y2 ,y3 , y4;
    x1 = 1; y1 = 1;
    x2 = 1; y2 = m;
    x3 = n; y3 = 1;
    x4 = n; y4 = m;
    vector<vector<int>> v(4);
    v[0].push_back(x1);
    v[0].push_back(y1);
    v[1].push_back(x2);
    v[1].push_back(y2);
    v[2].push_back(x3);
    v[2].push_back(y3);
    v[3].push_back(x4);
    v[3].push_back(y4);

    ll ans =0 ;
    int I = x;
    int J = y;
    for(int i =0;i<4;i++) {
        for(int j =0;j<4;j++) {
            vector<int> v1 = v[i];
            vector<int> v2 = v[j];
            ll sum = 0;
            ll d1 = abs(v1[0]-x) + abs(v1[1]-y);
            ll d2 = abs(v2[0]-x) + abs(v2[1]-y);
            
            sum = d1 + abs(v1[0]-v2[0]) + abs(v1[1]-v2[1]) + d2;

            if(sum > ans) {
                I = i;
                J = j;
                ans = sum;
            }
            
        }
        
    }
    cout<<v[I][0]<<' '<<v[I][1]<<' '<<v[J][0]<<' '<<v[J][1]<<endl;;




}

int main()
{
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

//                     __  __           _            _    ____                     _
//                    |  \/  | __ _ ___| | _____  __| |  / ___|__ _ _ __ _ __ ___ | |_
//                    | |\/| |/ _` / __| |/ / _ \/ _` | | |   / _` | '__| '__/ _ \| __|
//                    | |  | | (_| \__ \   <  __/ (_| | | |__| (_| | |  | | | (_) | |_
//                    |_|  |_|\__,_|___/_|\_\___|\__,_|  \____\__,_|_|  |_|  \___/ \__|
//                  =====================================================================
