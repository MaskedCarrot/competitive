#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



void solve(){
	ll n;
	std::cin>>n;
	ll arr[n];
	std::vector<ll> v;
	for(ll i =0;i<n;i++)
		cin>>arr[i];
	ll pl = arr[0];
	for(ll i =1;i<n;i++){
		if(arr[i] >= pl){
			pl = arr[i];
			v.push_back(0);
		}
		else{
			v.push_back(pl-arr[i]);
		}
	}
	ll sum = 0;
	ll m = 0;
	if(v.size() > 0)
	m=v[0];
	//for(int i =0;i<v.size();i++)
	//	std::cerr<<v[i]<<' ';
	//std::cout<<endl;

	for(ll i=0;i<v.size();i++){
		if(m > v[i]){
			sum = sum + m - v[i];
		}
		m = v[i];
	}
	sum = sum + m;
	std::cout<<sum<<endl;

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

