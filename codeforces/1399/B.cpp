#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
	ll n;
	std::cin>>n;
	ll a[n];
	ll b[n];
	ll mina = 1000000000;
	ll minb = 1000000000;
	for(ll i =0;i<n ;i++){
		std::cin>>a[i];
		if(a[i] < mina)
			mina = a[i];
	}
	for(ll i=0;i<n;i++){
		std::cin>>b[i];
		if(b[i] < minb)
			minb = b[i];
	}
	ll count = 0;
	for(ll i=0;i<n;i++){
		ll aa = a[i] - mina;
		ll bb = b[i] - minb;
		if(aa > bb){
			count = count + aa;

		}
		else{
			count = count + bb;
		}
		
	}
	std::cout<<count<<endl;
	
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


