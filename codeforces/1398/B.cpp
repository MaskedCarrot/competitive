#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
    string str;
    cin>>str;
    int pa = 0;
    int pb =0;
    int c = 0;
    vector<int> v;
    for(int i =0;i<str.size();i++){
        char ch = str[i];
        if(ch == '0'){
            v.push_back(c);
            c = 0;
        }
        else{
            c++;
        }

    }
    v.push_back(c);
    sort(v.begin(), v.end(), greater<int>());
    for(int i =0;i<v.size();i++){
        if(v[i] == 0)
            break;
        if(i % 2 == 0)
            pa = pa  + v[i];
        else
            pb = pb + v[i];
    }
    std::cout<<pa<<endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
    int a = 0;
	cin >> t;
	while (t--){
		//std::cout << "Case #" << a+1 <<": ";
	 	//a++;
		solve();
	}
	return 0;
}




//               __  __           _            _    ____                     _
//              |  \/  | __ _ ___| | _____  __| |  / ___|__ _ _ __ _ __ ___ | |_
//              | |\/| |/ _` / __| |/ / _ \/ _` | | |   / _` | '__| '__/ _ \| __|
//              | |  | | (_| \__ \   <  __/ (_| | | |__| (_| | |  | | | (_) | |_
//              |_|  |_|\__,_|___/_|\_\___|\__,_|  \____\__,_|_|  |_|  \___/ \__|
//            =====================================================================


