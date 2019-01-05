#include <bits/stdc++.h>                                         //Rajat Khanna --> 2017UCS0050
using namespace std;
//Template
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

//Handle:cyber_rajat

//Global Variables
ll k;
ll lright=0,lleft=0;
ll lpath=0,rpath=0;

//Declaration of a class               //Easy --> class was implemented completely by me
class Node 
{ 
    public:
    int data,height; //declaring variables and making it public
    Node *left; 
    Node *right;
    Node(int value)
    {
        this->data=value;//Initialising and assigning the value once the node is made
        this->left=NULL;
        this->right=NULL;
        this->height=1;
    } 
}; 

//Height Function 
int height(Node *x) //to check height  Easy --> Made by me
{ 
    if (x== NULL) 
        return 0; 
    return x->height; 
}

Node *rightRotate(Node * t1) //Function to rotate  started taking help from geeks of geeks
{ 
    Node *t2 = t1->left;                    //Read it and understood it and implemented it
    Node *t3 = t2->right; 

    t2->right = t1; 
    t1->left = t3; 

    t1->height = max(height(t1->left), height(t1->right))+1; //recurssively calling the function and returning height by     //adding root
    t2->height = max(height(t2->left), height(t2->right))+1; 
    
    return t2; 
} 

Node *leftRotate(Node *t2) // Same as leftRotate
{ 
     Node *t1 = t2->right; 
     Node *t3 = t1->left; 

    t1->left = t2; 
    t2->right = t3; 
 
    t2->height = max(height(t2->left), height(t2->right))+1; 
    t1->height = max(height(t1->left), height(t1->right))+1; 
 
    return t1; 
} 

int getBalance(Node *x) //To check balance --> was easy but i did not made it initially but saw importance in geek
{                       // and then implemented
    if (x == NULL) 
        return 0; 
    return height(x->left) - height(x->right); //difference recursively
}

Node* insert(Node* x,int a) //Insert function -->took help from geeks for geeks now understood
{ 
    if (x == NULL) {
        Node* newnode = new Node(a);
        return(newnode); 
    }

    if (a < x->data) 
        x->left = insert(x->left,a); 
    else if (a > x->data) 
        x->right = insert(x->right,a); 
    else  
        return x; 


    x->height = 1 + max(height(x->left), height(x->right)); 

    ll balanceFactor = getBalance(x); //getting balance and checking for various conditions
 
    if (balanceFactor > k && a < x->left->data) {
        lright++;//incrementing the variables
        return rightRotate(x); 
    }

    if (balanceFactor < -1*k && a > x->right->data){
        lleft++;//incrementing the variables
        return leftRotate(x); 
    }

    if (balanceFactor > k && a > x->left->data) 
    {  
        lleft++;//incrementing the variables
        lright++;//incrementing the variables
        x->left = leftRotate(x->left); 
        return rightRotate(x); 
    } 

    if (balanceFactor < -1*k && a < x->right->data) 
    { 
        lright++;//incrementing the variables
        lleft++;//incrementing the variables
        x->right = rightRotate(x->right); 
        return leftRotate(x); 
    } 
    return x; //returning updated root
} 

Node * minValueNode(Node* x) //Saw from geeks and made initially not understood its importance
{ 
    Node* current = x; 
    while (current->left != NULL) //Loop to check in the tree the minimum value
        current = current->left; 
  
    return current; 
} 
 
Node* deleteNode(Node* root, int a) //Took huge help from geeks of geeks
{ 
    if (root == NULL) 
        return root; 

    if ( a < root->data ) 
        root->left = deleteNode(root->left, a); //recurssively calling and deleting node

    else if( a > root->data) 
        root->right = deleteNode(root->right, a); 

    else
    { 
        if( (root->left == NULL) || (root->right == NULL) ) 
        {   
            Node* temp;
            if(root->left!=NULL)
            {
                temp=root->left;
            }
            else
            {
                temp=root->right;
            }
            if (temp == NULL) 
            { 
                temp = root; 
                root = NULL; 
            } 
            else  
             *root = *temp;  
                            
            delete(temp); //free s used in c and delete in CPP
        } 
        else
        { 
            Node* temp = minValueNode(root->right); 
            root->data = temp->data; 
            root->right = deleteNode(root->right, temp->data); 
        } 
    } 
  
    if (root == NULL) 
      return root; 
 
    root->height = 1 + max(height(root->left),  height(root->right)); 
 
    int balanceFactor = getBalance(root); 
  
    if (balanceFactor > k && getBalance(root->left) >= 0) 
    {
        lright++;//incrementing the variables
        return rightRotate(root); 
    }
  
    if (balanceFactor > k && getBalance(root->left) < 0) 
    { 
        lright++;//incrementing the variables
        lleft++;//incrementing the variables
        root->left =  leftRotate(root->left); 
        return rightRotate(root); 
    } 
  
    if (balanceFactor < -1*k && getBalance(root->right) <= 0) 
    {
        lleft++;//incrementing the variables
        return leftRotate(root); 
    }

    if (balanceFactor < -1*k && getBalance(root->right) > 0) 
    { 
        lright++;//incrementing the variables
        lleft++;//incrementing the variables
        root->right = rightRotate(root->right); 
        return leftRotate(root); 
    } 
  
    return root; //returning updated root
}

bool searchIt(Node *root1,int val) //Searching function       -->Easy  --> done completely by me
{
    if(root1 == NULL)
    {
        return false;   //Key not found
    }
    if(val < root1->data)
    {
        lpath++;
        return searchIt(root1->left,val);//search in left and increment
    }
    if(root1->data < val)
    {
        rpath++;
        return searchIt(root1->right,val);//search in right and increment
    }
    return true; // We found the value and return true.
}

void inOrder(Node *root) //Inorder Traversal         -->Easy --> done completely by me
{ 
    if(root != NULL) 
    { 
        inOrder(root->left); 
        cout<<root->data<<" ";
        inOrder(root->right); 
    } 
} 

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0); 
   Node *root = NULL; //Making the root        ---> Easy --> The main was completely made by me

  cin>>k; //Inputting the balance factor
  int q;
  cin>>q;
  while(q--)//Queries
  {
      int var;
      cin>>var;
      if(var==1)//insertion
      {
          int key;
          cin>>key;
          //arr[key]++;
        root = insert(root,key); //Inserting into the tree
      }
      else if(var==2)//rotation
      {
          cout<<lleft<<" "<<lright<<endl;
      }
      else if(var==3)//searching
      {
          int var;
          cin>>var;
          Node* root1=root;
          bool ans=searchIt(root1,var);//Bool fuction to return value true or false
          //Searchig in the avl and counting the nuber of nodes involved in
         //searching a node in a tree
          if(ans)
          {
              cout<<lpath<<" "<<rpath<<endl;
              lpath=0;                      //reinitialising for next Search operation
              rpath=0;
          }
          else
          {
              cout<<"-1 -1"<<endl;
          }
      }
      else if(var==4)//deletion
      {
          int var;//inputting the key
          cin>>var;
          root = deleteNode(root,var);  //Deletion in the Tree
      }
      else//inOrder Traversal
      {
          inOrder(root);  //Inorder Traversal
      }
  }


return 0; 
}


