	#include <bits/stdc++.h>
	#define ll long long	
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;

		while(T--)
		{
			int n,sum=0;
			cin>>n;
			for(int j=0; j<n; j++){
				int q;
				cin>>q;
				int a;
				std::vector<int> arr[n];

				for(int i = 0; i < q; i++){
					cin>>a;
					arr[j].push_back(a);
				}

				std::sort(arr[j].begin(), arr[j].end(),greater<int>());

				for(int i = 0; i < arr[j].size(); i+2){
					sum += arr[i][j];
				}
			}
			cout<<sum;	
		}
		return 0;
	}
