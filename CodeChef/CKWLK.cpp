#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc;
	cin>>tc;

	while(tc--){
		ll n, f(1);
		bool flag = 0;
		cin>>n;
		
		for(int i = 0; i <= 18; i++){

			for(int j = 0; j <= 18; j++){
				if(i!=0 && j==0){
					f = pow(10, i);
					if(f == n){
						flag = 1;
						break;
					}
				}
				else if(i == 0 && j != 0){
					f = pow(20, j);
					if(f == n){
						flag = 1;
						break;
					}
				}
				else{
						f = pow(10, i) * pow(20, j);
						if(n == f){
							flag = 1;
							break;
						}
				}
			}
		}

		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	    
	}
	return 0;
}