#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 
#define pb push_back
#define sz size()
#define ff first
#define ss second
#define ll long long int
#define ld long double
#define bp __builtin_popcountll
#define FOR(i,a,b) for(i=a;i<b;i++)
#define ROR(i,a,b) for(i=a;i>b;i--)
#define FORE(i,a,b) for(i=a;i<=b;i++)
#define RORE(i,a,b) for(i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
const ll M=1e9+7;

bool isprime(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return a.second<b.second;
}
// fflush(stdout)

int main()
{
    FAST;
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,e,sum=1,s=1,n,i;
        cin>>n>>a;
        FOR(i,0,n)
        {
            s*=10;
        }
        cout<<a+2*s<<"\n";
        cout.flush();
        cin>>c;
        cout<<s-c<<"\n";
        cout.flush();
        cin>>d;
        cout<<s-d<<"\n";
        cout.flush();
        cin>>sum;
    }
}