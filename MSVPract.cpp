#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	int tc;

	cin>>tc;

	while(tc--){
		
		int n;
		cin>>n;

		int arr[n], maxx=0, count=0, arr1[n]={0};


		for (int i = 0; i < n; ++i)
		cin>>arr[i];

		for (int i = n-1; i >= 0; i--)
		{
			count = 0;
			
			//sub check
			if(arr1[i] == 1)
					continue;
			for(int k = i-1; k >= 0; k--){
	
				if((arr[k]%arr[i]) == 0){
					arr1[k] = 1;
					count++;
				}
			}

			maxx  = max(count, maxx);
		}


		cout<<maxx<<endl;
	}
	
	return 0;
}



