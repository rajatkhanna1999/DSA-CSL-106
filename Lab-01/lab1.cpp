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


// Complete the findCommon function below.
int findCommon(string str1, string str2) {
  int len1=str1.size();
  int len2=str2.size();
    int cnt=0;
  for(int i=0;i<len1;i++)
  {
      for(int j=0;j<len2;j++)
      {
          if(str1[i]==str2[j])
          {
              str2[j]='*';
              cnt++;
              break;
          }
      }
  }
 return cnt;
}

// Complete the shiftLeft function below.
void shiftLeft(string &str, int pos) {


}

// Complete the solveFlames function below.
void solveFlames(string &str, int iter) {
 //int index=iter-1;
 int index=0; 
 int len=iter-1;
    while(str.size()!=1){
    int temp=str.size();
    if(index==temp){
        index=0;
        index=(index+len)%str.size();
    }
    else{
     index=(index+len)%str.size();
    }
    str.erase(index,1);
    }

}

int main()
{
    sync;
    // Input the two names and store them as strings.
    string a,b;
    cin>>a>>b;
    // Create variable flames of type string and initialize it to "FLAMES".
    string k="FLAMES";
    // Call function findCommon with both the inputs as parameters and store the result in a variable: commonCount.
      int common=findCommon(a,b);
    // Using commonCount, calculate the number of iterations required to remove a character from "FLAMES" and store the result in the variable 'iter' of type integer.
    int len1=a.size();
    int len2=b.size();
    int iter=len1+len2-2*common;
    solveFlames(k,iter);
    // Call the function solveFlames with string flames and integer iter as parameters.

    // Print the appropriate result.
    cout<<"["<<len1<<","<<len2<<","<<common<<","<<k<<"]"<<endl;
    return 0;
}

