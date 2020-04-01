#include<bits/stdc++.h>
#define MOD 1000000007
#define ull unsigned long long
#define ll  long long
#define vi vector<int>
#define vll vector<ll> 
#define vvi vector < vi >
#define vvl vector < vll >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define FOR(b) for(long long i=0;i<b;++i)

using namespace std;


int main() {
    ll t;
    cin>>t;

    while(t--) {
        ll n,p;
        cin>>n>>p;

        ll arr[n],arr1[n]={0};
        bool flag = 0;

        FOR(n){
            cin>>arr[i];
            if(p%arr[i]) {
                arr1[i]=1;
                flag = 1;
            }
        }
        
        sort(arr,arr+n);

        if(!flag) {
             vll v;
            FOR(n) {
                if(p%arr[i]==0 && arr[i]!=1)
                    v.push_back(arr[i]);
            }
            if(v.size()>1) {
                bool flag1=false;
                ll a1,b1,b2;
                for(ll i=0;i<v.size();i++) {
                    if(i+1<v.size()) {
                        ll x=(p)/(v[i+1]);
                        x--;
                        ll y=ceil((p-(x*v[i+1]))/(double)v[i]);
                        
                        if(x*v[i+1]+y*v[i]<=p || (x-1)*v[i+1]+y*v[i]>=p || x*v[i+1]+(y-1)*v[i]>=p)
                            continue;
                        
                        flag1=true;
                        a1=i;
                        b1=y;
                        b2=x;
                        break;
                    }
                }
                if(!flag1)
                    cout<<"NO"<<endl;
                else {
                    cout<<"YES ";
                    if(arr[0]==1)
                        cout<<0<<" ";
                    FOR(v.size()){
                        if(i==a1) {
                            cout<<b1<<" "<<b2<<" ";
                            i++;
                        } else {
                            cout<<0<<" ";
                        }
                    }
                    cout<<endl;
                }
            } else {
                cout<<"NO"<<endl;
            }
        } else {
            cout<<"YES ";
            bool flag2 = 1;
            FOR(n){
                if(arr1[i] == 1 && flag2) {
                    
                    ll ans=ceil(p/(double)(arr[i]));
                    cout<<ans<<" ";
                    flag2=0;
                } else {
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
