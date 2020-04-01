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

    std::ios::sync_with_stdio(false);
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t;
    cin>>t;

    ll total=0;
    while(t--) {
        ll n, ans = INT_MIN; 
        cin>>n;

        vvl mat(4,vll(4,0));
        

        unordered_map<char,ll> mvs;
        unordered_map<ll,ll> time;

        mvs['A'] = 0;
        mvs['B'] = 1;
        mvs['C'] = 2;
        mvs['D'] = 3;

        time[12]=0;
        time[3]=1;
        time[6]=2;
        time[9]=3;

        FOR(n){
            char m;
            ll t;
            cin>>m>>t;

            mat[mvs[m]][time[t]]++;
        }
        //create entry
        //complexity is fked
       vector<ll> cols(4,0);
        
        FOR(4){
            cols[i] = 1;
            for(ll j=0;j<4;j++) {
                if(cols[j])
                    continue;
                cols[j] = 1;
                for(ll k=0;k<4;k++) {
                    if(cols[k])
                        continue;
                    cols[k] = 1;
                    for(ll l=0;l<4;l++) {
                        if(cols[l])
                            continue;
                        cols[l] = 1;


                        vector<ll> calc;
                        calc.push_back(mat[0][i]);
                        calc.push_back(mat[1][j]);
                        calc.push_back(mat[2][k]);
                        calc.push_back(mat[3][l]);
                        

                        sort(calc.begin(),calc.end());

                        ll tcost = 25, sls = 0;
                        for(int m=0;m<4;m++) {
                            if(calc[m] != 0) 
                                sls += (tcost*calc[m]);
                            else 
                                sls -= 100;   //deduct on loss
                            tcost += 25;
                        }
                        ans = max(ans,sls);
                        cols[l] = 0;
                    }
                    cols[k] = 0;
                }
                cols[j] = 0;
            }
            cols[i] = 0;
        }

        cout<<ans<<endl;
        total += ans;
    }
    cout<<total<<endl;
    return 0;
}
