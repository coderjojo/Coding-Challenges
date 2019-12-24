#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int tc;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>tc;
	while(tc--){
		ll min,max;
		cin>>min>>max;
		if(min==1) min++;
		for(int i=min; i<=max; i++){
			bool flag=true;
			for(int j=2; j<=i/2; j++){
				if(i%j==0){
				flag=false;
				break;
				}
			}
			if(flag)
			cout<<i<<endl;
		}
	}
	return 0;
}