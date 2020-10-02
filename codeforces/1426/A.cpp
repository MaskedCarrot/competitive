#include <bits/stdc++.h>
using namespace std;
 
#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"
 
 
 
void solve(){
    int x;
    int a;
    cin>>a>>x;
    if(a == 1 || a == 2){
        std::cout<<1<<endl;
        return;
    }
    a = a-2;
    //td::cout<<a<<" "<<x<<endl;
    int temp= a/x ;
    if(a%x  != 0){
        temp++;
    }
    cout<<temp+1<<endl;

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
 
 