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

int main()
{
    sync;
    ll g;
    cin>>g;
    while(g--)
    {
        ll a1[100005]={0},a2[100005]={0};
        queue<ll> q1,q2;         //Making ques and vector
        ll n,m,x;
        cin>>n>>m>>x;
        ll cnt=0,cnt1=0,cnt2=0,curr_sum=0,sum1=0,sum2=0;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            a1[i]=a;
            q1.push(a);
        }
        for(ll i=0;i<m;i++)
        {
            ll b;
            cin>>b;
            a2[i]=b;
            q2.push(b);
        }
        ll k=0,v=0;
        while(k<n && curr_sum+a1[k]<=x)
        {
            curr_sum+=a1[k];//summing one queue
            k++;
            cnt++;
        }
        while(v<m && k>=0)
        {
            curr_sum+=a2[v];//summing one and popping other
            v++;
            while(curr_sum>x && k>0)
            {
                k--;
                curr_sum=curr_sum-a1[k];
            }
            if(curr_sum<=x)
            {
                cnt=max(cnt,k+v);
            }
        }
        cout<<cnt<<endl;
    }    
    return 0;
} 

