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

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isSymmetric' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isSymmetric(string s) {
    int i=0;
    stack<char>s1;
    bool ans=true;
   while(i<s.size())
   {
       if(s[i]=='(' || s[i]=='{' || s[i]=='[')
           s1.push(s[i]);
       else if(s[i]==')')
       {
           char c=s1.top();
           s1.pop();
           if(c!='(' )
           {
               ans=false;
               break;
           }
       }
       else if(s[i]==']')
       {
           char c=s1.top();
           s1.pop();
           if(c!='[')
           {
               ans=false;
               break;
           }  
       }
       else if(s[i]=='}')
       {
           char c=s1.top();
           s1.pop();
           if(c!='{')
           {
               ans=false;
               break;
           }
       }  
       i++;
   }
    if(!s1.empty())
        ans=false;
    
    if(ans==false)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isSymmetric(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

