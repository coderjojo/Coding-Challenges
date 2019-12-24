#include<iostream>
#define ll long long 
using namespace std;

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		ll n, c = 0, twos = 0, zeros = 0;
		cin>>n;
		ll arr;

		for(int i = 0; i < n; i++){
			cin>>arr;
			if(arr == 2)
				twos++;
			else if (arr == 0)
				zeros++;
			else
				continue;
		}

		//total
		c = ((twos) * (twos-1))/2 + ((zeros) * (zeros-1)/2);

		cout<<c<<endl;
	}
}
