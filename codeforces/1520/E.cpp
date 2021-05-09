#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve() {
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll s =0;
    for(ll i =0;i<n;i++) {
        if(str[i] == '*')
            s++;
    }
    bool sheep = false;
    ll count = 0;
    ll sheepToMove =0;
    ll blockToMove = 0;
    bool blocks = false;
    for(ll i = 0;i<n;i++) {
        if(str[i] == '.'&& !sheep)
            continue;
        if(str[i] == '*' && !blocks) {
            sheepToMove++;
            sheep = true;
        }
        if(str[i]=='.' && sheep) {
            blockToMove++;
            blocks = true;
        }
        if(str[i] == '*' && blocks && sheep) {
            if(sheepToMove > s-sheepToMove) {
                count += (s-sheepToMove)*blockToMove;
            }
            else {
                count += sheepToMove*blockToMove;
            }
            sheepToMove++;
            blockToMove = 0;
            sheep = true;
            blocks = false;
        }

    }
    cout<<count<<endl;
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
