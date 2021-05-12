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

void solve() {
    int n;
    int x;
    cin>>n>>x;
    int ind = -1;
    int sum = 0;
    int arr[n];
    for(int i =0;i<n;++i) {
        cin>>arr[i];
        sum = sum + arr[i];
        if(sum == x)
            ind = i;
    }

    if(ind == n-1) {
        no;
        return;
    }
    yes;
    for(int i=0;i<n;++i) {
        if(i == ind) {
            cout<<arr[i+1]<<' '<<arr[i]<<' ';
            i++;
        } else {
            cout<<arr[i]<<' ';
        }
    }
    cout<<endl;
}


int main() {
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
