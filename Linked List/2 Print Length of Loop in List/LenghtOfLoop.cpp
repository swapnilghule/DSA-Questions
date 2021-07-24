// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}
// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/





int countNodesinLoop(struct Node *head)
{
    // Code 
    Node *slow=head;
    Node *fast=head;
    
    int c=0;
    Node *temp=NULL;
    
    while(fast !=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        
        if(fast==slow)
        {
            temp=slow;
            break;
        }
    }
    
    
    if(temp==NULL)
    return 0;
    
    else
    {
     Node *curr=temp;
        while(curr->next != temp)
        {
            c++;
            curr=curr->next;
        }
        
        return c+1;
    }
    
    

    
    
}