#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve() {
    int n;
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    int val = INT_MAX;
    for(int i =0;i<n;i++) {
        cin>>arr[i];
        if(val>arr[i]) {
            min = i;
            val = arr[i];
        }
    }
   
    int j =1;
    int count = 0;
    cout<<n-1<<endl;
    for(int i=min+1;i<n;i++) {
        arr[i] = arr[min]+j;
        j++;
        count++;
        cout<<min+1<<' '<<i+1<<' '<<arr[min]<<' '<<arr[i]<<endl;
    }
    j =1 ;
    for(int i = min-1;i>=0;--i) {
        arr[i] = arr[min]+j;
        j++;
        count++;
        cout<<min+1<<' '<<i+1<<' '<<arr[min]<<' '<<arr[i]<<endl;
    }


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
