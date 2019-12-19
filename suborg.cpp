#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		string s;
		int n;
		cin>>n;
		cin>>s;
		std::vector<int> v[100000];
		int c = n, temp = 0;
		//keep the track of the occurance
		for(int i = 0; i < n; i++){
			v[s[i]].push_back(i);
		}

		for(int i = 0; i < 256; i++)
			if(v[i].size())
				for(int j = 0; j < v[i].size()-1; j++)
					c = min(c, v[i][j+1]- v[i][j]);

		cout<<n-c<<endl;
	}
}