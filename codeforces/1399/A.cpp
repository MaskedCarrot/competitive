#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
	int n;
	std::cin>>n;
	int arr[n];
	int flag = 0;
	for(int i = 0 ;i<n;i++)
		std::cin>>arr[i];
	std::sort(arr , arr+n);
	for(int i = 1 ;i<n;i++){
		int d = arr[i] - arr[i-1];
		if(d > 1){
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		no;
	else
	{
		yes;
	}
	
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


