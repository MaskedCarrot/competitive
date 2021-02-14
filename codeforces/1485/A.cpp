#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"
 
 
 
void solve(){
    ll a , b;
    cin>>a>>b;
	ll c = 1000000007;
	ll ans = 0;
	for(int i = 0 ;i< 33;i++) {
		ll tempB = b+ i;
		ll tempA = a;
		ans = i;
		if(tempB == 1)
			continue;
		while(tempA > 0) {
			tempA = tempA/tempB;
			ans++;
		}
		c = min(ans , c);
	}
	cout<<c<<endl;
}
 
int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
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
 