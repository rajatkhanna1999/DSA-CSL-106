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

class trainlist
{
public:
    string name;
    int num;
    string source;
    string destination;
    int seats;
};

int scan_trains(int n,vector<trainlist>& v)
{
    int a,d,i;
    string e,b,c;
    trainlist temp;
    for(i=0;i<n;i++){
    cin>>temp.name>>temp.num>>temp.source>>temp.destination>>temp.seats;
    v.push_back(temp);
    }
    return i;
}

int print_trains(vector<trainlist>& v)
{
    vector<trainlist>::iterator it;
    int x=0;
    for(it=v.begin();it!=v.end();it++)
    {
        x++;
        cout<<(*it).name<<" "<<(*it).num<<" "<<(*it).source<<" "<<(*it).destination<<" "<<"500 "<<(*it).seats<<" "<<endl;
    }
    return x;
}


void cancel_ticket(vector<trainlist>& v)
{
  int a,b,x=-1;
  cin>>a>>b;
  vector<trainlist>::iterator it;
  for(it=v.begin();it!=v.end();it++)
  {
      if((*it).num==a)
      {
          if(((*it).seats+b)<=500)
          {
              x=(*it).seats+b;
              (*it).seats=x;
              break;
          }
          else
          {
              x=0;
              break;
          }
      }
  }  
            if(x>0)
            {
              //vector<trainlist>::iterator iti;
                cout<<"Train number to make cancellation: "<<a<<endl;
                cout<<"Number of tickets to be cancelled: "<<b<<endl;
                cout<<"Tickets cancelled. Number of Tickets Available: "<<x<<endl;
            }
            else if(x==0)
            {
                cout<<"Train number to make cancellation: "<<a<<endl;
                cout<<"Number of tickets to be cancelled: "<<b<<endl;
                cout<<"Not Enough bookings to cancel."<<endl;
            }
            else if(x==-1)
            {
                cout<<"Train number to make cancellation: "<<a<<endl;
                cout<<"Number of tickets to be cancelled: "<<b<<endl;
                cout<<"Train Number not in records."<<endl;
            }
}

int main() {
    sync;
    int n, m ,k;
    cin >> n;
    
    // declare a vector named trainList to contain train records
    vector<trainlist> v;
  
    if( n > 0 ){
        cout << "Testing reading train records." << endl;
      
      // call scan_trains with n and trainList as parameters.
       int value=scan_trains(n,v);
        cout << "Total number of train records: " << value << endl << endl;      
    }
    
    cin >> m;
    if( m > 0 ){
        cout << "Testing reading train records again." << endl;
      
      // call scan_trains again with m and trainList as parameters.
       int value=scan_trains(m,v);
        cout << "Total number of train records: " << value+n << endl << endl;
    }
    
    
    cout << "Testing printing train records."<< endl;
  
    // call print_trains with trainList as parameter.
    int value=print_trains(v);
    cout << "Total number of train records printed: " << value<< endl << endl;
  
    cin >> k;
    if( k > 0 ){
        cout << "Testing cancelling tickets." << endl;
        //int sum=0;
        for(int i=0; i<k; i++){
          // call cancel_ticket with trainList as paramete
             cancel_ticket(v);
           
        }
      
        cout <<endl;
        cout<< "Testing printing train records after updation."<< endl;
  
        // call print_trains again
         int value=print_trains(v);
        cout << "Total number of train records printed: " << value << endl;
    }
    return 0;
}
