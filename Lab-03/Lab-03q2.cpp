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
class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool Helper(SinglyLinkedListNode* ans, SinglyLinkedListNode* ans2,int l1,int l2)
{
    SinglyLinkedListNode* ans1=ans;
    int l=0;
    bool a=true;
    while(ans1!=NULL && ans2!=NULL)
    {
        if(ans1->data!=ans2->data)
        {
            a =false;
            break;
        }
        ans1=ans1->next;
        ans2=ans2->next;
    }
    
    if((ans1!=NULL || ans2!=NULL) && a!=false)
    {
       /* if(l1<l2)
        {
            cout<<l2<<","<<l1<<","<<"NULL"<<endl;
        }
        else
        {
            cout<<l1<<","<<l2<<","<<"NULL"<<endl;
        }
        return;*/
        return false;
    }
    
    if(a){
    ans1=ans;
    while(ans1!=NULL)
    {
        l++;
        ans1=ans1->next;
    }
    if(ans==NULL)
    {
        if(l1>l2){
            return false;
        //cout<<l1<<","<<l2<<",";
        //cout<<"NULL"<<endl;
        }
        else
        {
            return false;
          // cout<<l2<<","<<l1<<",";
        //cout<<"NULL"<<endl; 
        }
    }
    else if(l1<l2)
    {
       // cout<<l2<<","<<l1-l<<","<<ans->data<<endl;
        return true;
    }
    else
    {
        return true;
        //cout<<l1<<","<<l2-l<<","<<ans->data<<endl;
    }
    }
    else{
        
        
        
        if(l1<l2)
        {
            return false;
            //cout<<l2<<","<<l1<<","<<"NULL"<<endl;
        }
        else
        {
            return false;
            //cout<<l1<<","<<l2<<","<<"NULL"<<endl;
        }
    }
    
}

void solve(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* temp1=head1;
    SinglyLinkedListNode* temp2=head2;
    int l1=0,l2=0;
    while(temp1!=NULL)
    {
        l1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        l2++;
        temp2=temp2->next;
    }
    temp1=head1,temp2=head2;
    bool val;
    SinglyLinkedListNode* ans=NULL;
    SinglyLinkedListNode* ans2=NULL;
    if(l1<l2)
    {
        while(temp1!=NULL)
        {
            temp2=head2;
            while(temp2!=NULL)
            {
                if(temp1->data==temp2->data)
                {
                    ans=temp1;
                    ans2=temp2;
                    val= Helper(ans,ans2,l1,l2);//break;
                        if(val)
                            break;
                }
                temp2=temp2->next;
            }
         if(val)
             break;
            temp1=temp1->next;
        }
        
    }
    else
    {
        while(temp2!=NULL)
        {
            temp1=head1;
            while(temp1!=NULL)
            {
                if(temp1->data==temp2->data)
                {
                    ans=temp2;
                    ans2=temp1;
                    val=Helper(ans,ans2,l1,l2);
                    if(val)
                        break;
                }
                temp1=temp1->next;
            }
                if(val)
                    break;
            temp2=temp2->next;
        }
    }
    
    if(!val)
    {
      if(l1<l2)
      {
         cout<<l2<<","<<l1<<","<<"NULL"<<endl; 
      }
        else
        {
            cout<<l1<<","<<l2<<","<<"NULL"<<endl;
        }
    }
    else{
    SinglyLinkedListNode* te=ans;
        int l=0;
    while(te!=NULL)
    {
        l++;
        te=te->next;
    }
    
    if(l1<l2)
    {
        cout<<l2<<","<<l1-l<<","<<ans->data<<endl;
    }
    else
    {
        cout<<l1<<","<<l2-l<<","<<ans->data<<endl;
    }
        
        }


int main()
{  
    sync;
    SinglyLinkedList* llist1 = new SinglyLinkedList();

    int llist1_count;
    cin >> llist1_count;
  
  	int llist2_count;
    cin >> llist2_count;

    for (int i = 0; i < llist1_count; i++) {
      int llist1_item;
      cin >> llist1_item;
      
      llist1->insert_node(llist1_item);
    }

    SinglyLinkedList* llist2 = new SinglyLinkedList();

    for (int i = 0; i < llist2_count; i++) {
      int llist2_item;
      cin >> llist2_item;

      llist2->insert_node(llist2_item);
    }

    solve(llist1->head, llist2->head);
  
    return 0;
}
