
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);

		ll n,q, c1, c2, l, r;
		cin>>n>>q;

		ll arr[n];

		for(ll i = 0; i < n; i++)
			cin>>arr[i];

		while(q--){
		c1 = 0;
		c2 = 0;
		cin>>l>>r;
		for(ll i = l-1; i < r-1; i++){
			if(arr[i] <= arr[i+1])
				c1++;
			if(i > 0 && arr[i] < arr[i-1])
				c1++;
			if(arr[i] >= arr[i+1])
				c2++;
		}

		if(c1 == c2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

		}
		
		return 0;
	}
