#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
	int n;
	std::cin>>n;
	int arr[n];
	std::string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	std::cout<<str<<endl;
	for(int i =0;i<n;i++)
		std::cin>>arr[i];
	int f =0;
	for(int i =0;i<n;i++){
		f++;
			std::string t ="";
		for(int j =1;j<=70;j++){
		
			if(j > arr[i])
				if(f%2 == 0)
					if(str[j-1] != 'b')
						t = t + 'b';
					else
						t= t+ 'z';
				else
					if(str[j-1] != 'c')
						t = t + 'c';
					else
						t= t+ 'y';
			else
				t = t + str[j-1];
			
		}
		str = t;
		std::cout<<str<<endl;
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
		//std::cout << "Case #" << a+1 <<": "<<endl;;
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


