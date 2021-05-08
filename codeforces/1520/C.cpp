#include <bits/stdc++.h>
using namespace std;
 
#define mod 1'000'000'007
typedef long long ll;
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"
 
void solve() {
    int n;
    cin>>n;
    int arr[n][n];
    int d1 = 1;
    int d2 = (n%2==0)?(n*n)/2+1:(n*n)/2+2;
    if(n == 2) {
        cout<<-1<<endl;
        return;
    }


    for(int i =0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            if((i+j)%2==0) {
                arr[i][j] = d1;
                d1++;
            } else { 
                arr[i][j] = d2;
                d2++;
            }
        }
    }
    for(int i =0;i<n;i++) {
        for(int j = 0;j<n;j++)
            cout<<arr[i][j]<<' ';
        cout<<endl;
    }

}
 
int main() {
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
 
 
 
 
//                     __  __           _            _    ____                     _
//                    |  \/  | __ _ ___| | _____  __| |  / ___|__ _ _ __ _ __ ___ | |_
//                    | |\/| |/ _` / __| |/ / _ \/ _` | | |   / _` | '__| '__/ _ \| __|
//                    | |  | | (_| \__ \   <  __/ (_| | | |__| (_| | |  | | | (_) | |_
//                    |_|  |_|\__,_|___/_|\_\___|\__,_|  \____\__,_|_|  |_|  \___/ \__|
//                  =====================================================================
