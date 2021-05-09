#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve() {
    int n;
    cin>>n;
    int count = 0;
    vector<int> vec;
    while(n>0) {
        vec.push_back(n%10);
        n = n/10;
    }
    bool isit = true;
    reverse(vec.begin(), vec.end());
    int comp = vec[0];
    for(int i =1;i<vec.size();++i) {
        if(comp < vec[i]) {
            break;
        } else if(comp > vec[i]) {
            isit = false;
            break;
        } else {
            comp = vec[i];
        }
    }
    if(isit) {
        count = vec[0]+((vec.size()-1)*9);
    } else {
        count = vec[0]+((vec.size()-1)*9) -1;
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
