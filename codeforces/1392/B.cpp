#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
	ll n;
	ll k;
	cin >> n >>k;
	ll arr[n];
	int N = 0;
	int z  = 0;
	for(ll i =0;i<n;i++){
		cin>>arr[i];
		if(arr[i] < 0)
			N = 1;
		else if(arr[i] == 0)
			z = 1;

	}
	ll ma = arr[0];
	for(ll i =1;i<n;i++){
		if(ma < arr[i])
			ma = arr[i];
	}
	if(N == 0 && z == 1){
		if(k %2 == 0){
			for(ll i =0;i<n;i++)
				std::cout<<arr[i]<<' ';
			std::cout<<endl;
		}
		else{
			for(ll i =0;i<n;i++)
				std::cout<<ma - arr[i]<<' ';
			std::cout<<endl;
		}
	}
	else if (N == 1 && z == 0){
		int ma2 = ma;
		for(ll i =0;i<n;i++){
			arr[i] = ma -arr[i];
			if(ma2 < arr[i])
				ma2 = arr[i];
		}
		k--;
		if(k %2 == 0){
			for(ll i =0;i<n;i++)
				std::cout<<arr[i]<<' ';
			std::cout<<endl;
		}
		else{
			for(ll i =0;i<n;i++)
				std::cout<<ma2 - arr[i]<<' ';
			std::cout<<endl;
		}

	}
	else if(N == 0 && z == 0){
		int ma2 = 0;
		for(ll i =0;i<n;i++){
			arr[i] = ma -arr[i];
			if(ma2 < arr[i])
				ma2 = arr[i];
		}
		k--;
		if(k %2 == 0){
			for(ll i =0;i<n;i++)
				std::cout<<arr[i]<<' ';
			std::cout<<endl;
		}
		else{
			for(ll i =0;i<n;i++)
				std::cout<<ma2 - arr[i]<<' ';
			std::cout<<endl;
		}
	}
	else if(N == 1 && z == 1){
		int ma2 = 0;
		for(ll i =0;i<n;i++){
			arr[i] = ma -arr[i];
			if(ma2 < arr[i])
				ma2 = arr[i];
		}
		k--;
		if(k %2 == 0){
			for(ll i =0;i<n;i++)
				std::cout<<arr[i]<<' ';
			std::cout<<endl;
		}
		else{
			for(ll i =0;i<n;i++)
				std::cout<<ma2 - arr[i]<<' ';
			std::cout<<endl;
		}
	}


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


