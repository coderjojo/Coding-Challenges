#include<bits/stdc++.h>
#define FOR(b) for(long long i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll  long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;

        ll arr[n], ans=0;
        FOR(n){
            cin>>arr[i];
            ans+=arr[i];
        } 
                 
        cout<<ans%k<<endl;
    }
    return 0;
}