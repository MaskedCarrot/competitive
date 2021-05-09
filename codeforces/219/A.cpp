#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long int ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"

void solve() {
    int k;
    string str;
    cin>>k;
    cin>>str;
    int freq[26] = {0};
    for(int i = 0;i<str.length();++i) {
        freq[str[i]-97]++;
    }
    string result = "";
    for(int i =0;i<26;i++) {
        if(freq[i]%k != 0) {
            cout<<-1<<endl;
            return;
        }
        int l = freq[i]/k;
        for(int j = 0; j< l;++j)
            result += char(i+97);
    }
    for(int i=0;i<k;++i)
        cout<<result;
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    int a = 0;
    //cin >> t;
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
