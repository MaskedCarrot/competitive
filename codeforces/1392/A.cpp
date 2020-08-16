#include <bits/stdc++.h>
using namespace std;




void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
        int prev = arr[0];
        int flag = 0;
    for(int i =1;i<n;i++){
        if(!(arr[i] == prev)){
            flag = 1;
            break;
        }
        prev  = arr[i];


    }

    if(flag == 1)
        std::cout<<1<<endl; 
    else
        cout<<n<<endl;
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



