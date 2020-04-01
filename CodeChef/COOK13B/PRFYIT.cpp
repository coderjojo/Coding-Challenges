
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
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			string s;
			cin>>s;

			int arr[100001] = {0}, n = s.length(), maxx = 0;

			//count number of ones
			for(int i = 0; i < n; i++){
				//number of one in prev place
				arr[i+1] = arr[i];
				if(s[i] == '1')
					arr[i+1]++;
			}
// L _ R
			for(int i = 0; i < n; i++){
				for(int j = i+1; j <= n; j++){
									  //1's between			//left side				//right side
					maxx = max(maxx, ((arr[j] - arr[i]) + (i - arr[i]) + (n - j - (arr[n] - arr[j]))));

					maxx = max(maxx, ((j - i - (arr[j] - arr[i])) + arr[i] + (arr[n] - arr[j])));
				}
			}

			cout<<n-maxx<<endl;
		}
		return 0;
	}
