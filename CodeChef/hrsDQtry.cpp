#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int arr[128];
		int N, ans = 0, k, f;

		cin>>N;


		//initial element fill
		arr[0] = 0;
		for(int i = 1; i < 128; i++){
			k = arr[i-1];
			f = 1;
			for(int j = i-2; j >= 0; j--){
				if(arr[i] == k){
					f = 0;
					arr[i] = i - j - 1;
					break;
				}
			}

			if(f)
				arr[i] = 0;

		}
		N--;
		//calculate
		for(int i = N; i >= 0; i--)
			if(arr[N] == arr[i])
				ans++;

			cout<<ans<<endl;

	}
}