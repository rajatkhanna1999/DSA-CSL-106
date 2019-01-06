#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979323
#define debug(x) cout<<"Case "<<x<<": "
#define For(i,n) for(long long i=0;i<n;i++)
#define Frabs(i,a,b) for(long long i = a; i < b; i++)
#define Frabr(i,a,b) for(long long i = a; i >=b; i--)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long int           ll;
typedef long double             ld;
typedef unsigned long long int ull;
typedef vector <int>            vi;
typedef vector <ll>            vll;
typedef pair <int, int>        pii;
typedef pair <ll, ll>          pll;
typedef vector < pii >        vpii;
typedef vector < pll >        vpll;
typedef vector <string>         vs;

//Handle:cyber_rajat

int main(int argc, char const *argv[])
{
    ll n,q;
    cin>>n>>q;
    ll arr[n+5];
    memset(arr,-1,sizeof(arr));
    while(q--)
    {
        ll t;
        cin>>t;
        if(t==1)
        {
            ll v;
            cin>>v;
            ll index=v%n;
            if(arr[index]==-1)
                arr[index]=v;
            else 
            {
                ll j=1;
                while(arr[index]!=-1 && arr[index]!=-2){
                    index=(v+j*j)%n;
                    j++;
                }
                arr[index]=v;
            }
        }
        else if(t==2)
        {
            ll v;
            cin>>v;
            ll index=v%n;
            bool flag=true;
            ll probes=0,j=1;
            while(1)
            {
                if(arr[index]==v)
                {
                    probes++;
                    break;
                }
                else if(arr[index]==-1)
                {
                    probes++;
                    break;
                }
                else
                {
                    index=(v+j*j)%n;
                    j++;
                    probes++;
                }
            }
            cout<<probes<<endl;

        }
        else if(t==3)
        {
            ll v;
            cin>>v;
            ll j=1;
            ll index=v%n;
            while(1)
            {
            if(arr[index]==v)
            {
                arr[index]=-2;
                break;
            }
            else if(arr[index]==-1)
            {
                arr[index]=-1;
                break;
            }
            else
            {
                index=(v+j*j)%n;
                j++;
            }
            }
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                if(arr[i]!=-1 && arr[i]!=-2)
                    cout<<arr[i]<<" ";
                else
                    cout<<"NULL"<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

