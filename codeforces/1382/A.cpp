#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
	int a ;
	int b;
	std::cin>>a>>b;
	int arr[a];
	int brr[b];
	for(int i=0;i<a;i++)
		std::cin>>arr[i];
	for(int i=0;i<b;i++)
		std::cin>>brr[i];
	std::sort(arr , arr+a);
	std::sort(brr , brr+b);
	for(int i =0;i<a ;i++){
		for(int j = 0;j<b;j++){
			if(arr[i] == brr[j]){
				yes;
				std::cout<<1<<' '<<arr[i]<<endl;
				return;
			}
		}
	}
	no;


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


