#include<iostream>
using namespace std;

int main(){

	int tc;
	cin>>tc;

	while(tc--){
		int n, ind, sc, sum = 0;
		int arr[11] = {0};
		cin>>n;
		while(n--){
			cin>>ind>>sc;
			
			if(arr[ind-1]<sc)
				arr[ind-1] = sc;
		}

		for(int i = 0; i < 8; i++)
			sum += arr[i];

		cout<<sum<<endl;

	}

}