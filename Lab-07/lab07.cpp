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

  int arr[20005]={0};

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
          Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    
    int helper(Node*root , int v,int sum)
    {
       // cout<<"dffgghhj"<<endl;
       // cout<<v<<" "<<"root"<<root->data<<endl;
        if(v==root->data)
        {
            //cout<<" ddff"<<endl;
           // cout<<root->data<<endl;
            //sum+=root->data;
            /*flag=true;
            if(root->left!=NULL)
            sum=root->data+helper(root->left,v,sum,flag);
            else
                sum=root->data;
            return sum;*/
            if(arr[v]>1)
            {
                arr[v]--;
                sum=root->data+helper(root->left,v,sum);
                return sum;
            }
            else if(arr[v]==1)
            {
                sum=root->data;
                return sum;
            }
        }
        else if(v<root->data)
        {
           // if(root->left!=NULL)
           //cout<<"kkk"<<endl;
            sum=root->data+helper(root->left,v,sum);
            //else
              //  sum+=root->data;
            return sum;
        }
        else
        {
            //if(root->right!=NULL)
            //cout<<"jjj"<<endl;
            sum=root->data+helper(root->right,v,sum);
           // else
             //   sum+=root->data;
            return sum;
        }
        return 0;
    }
    

    int pathSum(Node *root, int v1,int v2) {
        // Write your code here.
        //v1=min(v1,v2);
        //v2=max(v1,v2);
        if(v1==v2 && v1==root->data)
        {
            int s1=helper(root,v1,0);
            return s1;
        }
        else if(v1<=root->data  &&  v2>=root->data)
        {
        int temp=root->data;
             //cout<<root->data<<endl;
        int s1=helper(root,v1,0);
             //cout<<s1<<endl;
             //cout<<root->data<<endl;
             //cout<<"h1"<<endl;
        int s2=helper(root,v2,0);
             //cout<<s2<<endl;
             //cout<<"h2"<<endl;
        int ans=s1+s2-temp;
            // cout<<"h3"<<endl;
             //cout<<ans<<endl;
        return ans;
        }
        
        else if( v1<=root->data  &&  v2 <=root->data)
        {
        int ans=pathSum(root->left,v1,v2);
        return ans;
        }
        
        else if( v1>=root->data  &&  v2>=root->data)
        {
        int ans=pathSum(root->right,v1,v2);
        return ans;
        }
        return 0;
    }

}; //End of Solution

int main() {
    sync;
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;
    while(t-- > 0) {
        std::cin >> data;
        arr[data]++;
        root = myTree.insert(root, data);
    }
      
      int q;
      cin >> q;
      
      while( q>0 ){
          int v1, v2;
          std::cin >> v1 >> v2;
          int t1=v1,t2=v2;
          v1=min(t1,t2);
          v2=max(t1,t2);
        int ans = myTree.pathSum(root, v1, v2);
          std:cout << ans << endl;
          q--;
    }

    return 0;
}
