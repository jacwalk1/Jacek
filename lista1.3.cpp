#include<iostream>
#include<list>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int val;
    node* next;
};



void Poka(node* H)
{
    cout << "H->";
    node* p = H;
    //p->next = e;
    while (p != NULL)
    {
        cout << p->val << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}
void Dodaj(node*& H, int x)
{
    node *p = new node;
    p->val=x;
    p->next = H;
    H = p;
}
node* Clone(node* H) 
     {
        if (H == NULL) 
        return NULL;

    node* result = new node;
    result->val = H->val;
    result->next = Clone(H->next);
    return result;
}
int main(void)
{

    node* H = NULL;
    H=new node;
    H->val = 2;
    H->next=NULL;
    node* p = new node;
    p->val = 1;
    p->next = H;
    H=p;
    //cout<<H->next->next->val<<endl;
    Dodaj(H->next->next, 3);
    Dodaj(H->next->next->next, 4);
    Poka(H);
    node* e = NULL;
    e=new node;
    e->next=NULL;
    e=e->next;
    e=Clone(H);
    p->next->next->next->next=e;
    Poka(H);
   
  
   
    
}