#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"




int countEqualSum(int arr[], int n){

}
void solve(){
	int n;
	std::cin>>n;
	int arr[n];
	int w[101] = {0};
	for(int i = 0;i<n;i++)
		std::cin>>arr[i];
	
	for(int i=0;i<101;i++){
		int t[n];
		for(int m = 0;m < n;m++)
			t[m] = arr[m];
		for(int j = 0;j <n;j++){
			for(int k = 0;k < n;k++){
				if(j == k){
					continue;
				}
				if(((t[j]+t[k]) == i)&& t[k] != 0 && t[j] != 0){
					t[j] = 0;
					t[k] = 0;
					w[i]++;
				}
			}
		}
	}
	std::sort(w , w+101);
	std::cout<<w[100]<<endl;

	
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


