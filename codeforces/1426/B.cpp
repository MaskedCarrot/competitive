#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve() {
    int n;
    int m;
    cin>>n>>m;
    // cout<<"n="<<n<<"m="<<m<<endl;
    int flag = 0;
    if(m%2 != 0) {
        flag = 2;
    }
    for(int i=0;i<n;++i) {
        int x , y , z , w;
        cin>>x>>y;
        cin>>z>>w;
        if(y == z && flag == 0) {
            // cout<<"m="<<m<<"flag = "<<flag<<endl;
            yes;
            flag = 1;
        }
        
    }
    if(flag != 1)
        no;

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
