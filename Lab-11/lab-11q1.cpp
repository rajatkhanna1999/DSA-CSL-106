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

//Handle:cyber_rajat

ll Edge[100][100]={0};
bool visited[100];

void BreadthFirstSearch(ll start,ll n)
{
     queue<ll> Nodes;
     Nodes.push(start);
     visited[start]=true;

     while(Nodes.size()!=0)
     {
         ll vertix=Nodes.front();
         cout<<vertix<<" ";
         Nodes.pop();

         for(ll i=0;i<n;i++)
         {
             if(Edge[vertix][i]==1)
             {
                 if(!visited[i])
                 {
                     Nodes.push(i);
                     visited[i]=true;
                 }
             }
         }
     }

     return ;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        Edge[u][v]=1;
    }
    ll start;
    cin>>start;
    for(ll i=0;i<n+5;i++)
        visited[i]=false;
    BreadthFirstSearch(start,n);
    for(ll i=0;i<n;i++)
     {
         if(!visited[i])
             BreadthFirstSearch(i,n);
     }
}
