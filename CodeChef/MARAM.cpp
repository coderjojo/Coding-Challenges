#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

	int tc;
	cin>>tc;

	while(tc--){

		ll N, K, a(0), b(0);
		cin>>N>>K;

		ll arr[N];
		for(ll i = 0; i < N; i++)
			cin>>arr[i];
    	
		//Corner Cases considered
		//Should  work for task 2

	    if(((N%2) != 0) && (K > N/2)){
	        arr[N/2] = 0;
	    }
	    
	    
	    K %= (3*N);
  

		for(ll i = 0; i < K; i++){
			a = i % N;
			b = arr[N-a-1];

			arr[a] ^=  b;
		}

		for (ll i = 0; i < N; ++i)
			cout<<arr[i]<<" ";

	
		cout<<endl;
	}
	
	return 0;
}