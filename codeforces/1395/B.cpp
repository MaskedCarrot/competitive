#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve() {
    int n, m, x , y;
    cin>>n>>m>>x>>y;
    int arr[n+1][m+1];
    for(int i =0;i<=n;i++)
        for(int j = 0 ;j<=m;j++)
            arr[i][j] = 0;
    cout<<x<<' '<<y<<endl;
    cout<<1<<' '<<y<<endl;
    arr[x][y]++;
    arr[1][y]++;
    for(int j =0;j<n;j++) {
        x = 1 + j;
        if(x%2 == 0) {
            for(int i =0;i<m;i++) {
                y = m-i;
                //cout<<x<<' '<<y<<endl;
                if(arr[x][y]==0) {
                    cout<<x<<' '<<y<<endl;
                    arr[x][y]++;
                    
                }
            }
        } else {
    
            for(int i =0;i<m;i++) {
                y = 1 + i;
                //cout<<x<<' '<<y<<endl;
                if(arr[x][y]==0) {
                    cout<<x<<' '<<y<<endl;
                    arr[x][y]++;
                }
            }
        }   
    }


}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    ll a = 0;
    // cin >> t;
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
