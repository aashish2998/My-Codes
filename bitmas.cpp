## bitmas

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

ll expoMod(ll n, ll m)
{
    ll res =1;
    
    while(m>0)
    {
        if(m%2)res =(res*n)%MOD;  
          n=(n*n) %MOD;
          m=m/2;
        
    }
    return res;
}

int main()
{
   ll t,n,m;
   cin>>t;
   while(t--)
   {
       cin>>n>>m;
       ll y= expoMod(2,n)-1;
       y=y%MOD;
       ll ans = expoMod(y,m);
       ans%=MOD;
       cout<<ans<<endl;
   }
    return 0;
}    
