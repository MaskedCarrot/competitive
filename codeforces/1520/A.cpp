#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int freq[26] = {0};
    char in = str[0];
    freq[in-65]++;
    for(int i = 1;i<n; i++) {
        if(str[i] != in) {
            if(freq[str[i]-65] >= 1) {
                cout<<"NO"<<endl;
                return;
            } else {
                in = str[i];
                freq[in-65]++;
            }
        }
    }
    //cout<<freq[0]<<endl;
    //cout<<freq[1]<<endl;
    cout<<"YES"<<endl;
    return;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    int a = 0;
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
