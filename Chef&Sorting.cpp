#include<bits/stdc++.h>
#define ll long long

#define LOG(x) std::cout<<x<<std::endl
int main()
{
	
	int tc;
	std::cin>>tc;
	while(tc--){
		ll n,count=0;
	    std::cin>>n;
	    ll arr[n];
	    for(int i=0; i<n; i++)
	    	std::cin>>arr[i];

	    ll arr1[n];
	    std::sort(arr1, arr+n);
	    for(int i=0; i<n; i++){
	    	if(arr[i]!=arr1[i])
	    		count++;
	    }
	    std::cout<<count<<std::endl;
	}
	return 0;
}