#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;


//Noob 

int main(){
    int tc;
    cin>>tc;
    while (tc--)
    {
        
        unordered_map<ll,ll> N,M;
        ll n, m, q;

        cin>>n>>m>>q;
        
        while(q--){
           
            ll a, b;
            cin>>a>>b;
            --a;
            --b;
            N[a]++;
            M[b]++;
        }

        ll E=0, O=0, E1=0, O1=0;
        
        for ( ll i = 0; i < n; i++){

            if (N[i]%2!=0) 
                O++;
            else 
                E++;
        }

        for (ll i = 0; i < m; i++){

            if (M[i]%2!=0) 
                O1++;
            else 
                E1++;
        }

        ll op = (E * O1)+(E1 * O);


        cout<<op<<endl;
    }
    return 0;
}