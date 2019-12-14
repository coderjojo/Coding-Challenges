#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc;
	cin>>tc;

	while(tc--){
		ll N, t, t1;
		cin>>N;
		std::vector<ll> v;
		std::vector<ll> V1;

		for(ll i = 0; i < N; i++){
			cin>>t;
			v.push_back(t);
		}

		V1 = v;

		sort(V1.begin(), V1.end());

		for(int i = 0; i < N; i++){
			if(V1.front() == v[i])
			t = i;
			if(V1.back() == v[i])
			t1 = i;
		}
        if(t>t1)
		cout<<V1.back()<<" "<<V1.front()<<endl;
	    else
	    cout<<V1.front()<<" "<<V1.back()<<endl;

}
	
	return 0;
}