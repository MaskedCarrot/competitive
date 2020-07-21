#include <bits/stdc++.h>
using namespace std;

#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"



void solve(){
	int n;
	std::cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		char ch;
		std::cin>>ch;
		a[i] = (int)(ch -48);
	}
	for(int i =0;i<n;i++){
		char ch;
		std::cin>>ch;
		b[i] = (int)(ch -48);
	}
	std::vector<int>v;
	for(int i =n-1;i>-1;i--){
		if(a[i] == b[i]){
			continue;
		}
		else{
			if(a[0] != b[i]){
				v.push_back(i+1);
				int m=0;
				int c =i;
				while(1){
					if(c <= m)
						break;
					int temp = a[m];
					a[m] = a[c];
					a[c] = temp;
					m++;
					c--;

				}
				for(m = 0;m<i+1;m++)
					if(a[m] == 0)
						a[m] =1;
					else
						a[m] = 0;
			}
			else{
				v.push_back(1);
				if(a[0] == 0)
					a[0] = 1;
				else
					a[0] = 0;
				v.push_back(i+1);
				int m=0;
				int c =i;
				while(1){
					if(c <= m)
						break;
					int temp = a[m];
					a[m] = a[c];
					a[c] = temp;
					m++;
					c--;

				}
				for(m = 0;m<i+1;m++)
					if(a[m] == 0)
						a[m] =1;
					else
						a[m] = 0;
			}
		}
	}
	std::cout<<v.size()<<' ';
	for(int i =0;i<v.size();i++)
		std::cout<<v[i]<<' ';
	std::cout<<endl;
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


