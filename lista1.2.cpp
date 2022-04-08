#include<iostream>
#include<list>
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

int main()
{

    node* H = NULL;
    H=new node;
    H->val = 2;
    H->next=NULL;
    node* p = new node;
    p->val = 1;
    p->next = H;
    H=p;
    Dodaj(H->next->next, 3);
    Dodaj(H->next->next->next, 4);
    Poka(H);
    node* e = NULL;
    e=new node;
    e->next=NULL;
    e=e->next;
    Dodaj(e,p->val);
    p=p->next;
    Dodaj(e,p->val);
    p=p->next;
    Dodaj(e,p->val);
    p=p->next;
    Dodaj(e,p->val);
    //Poka(e);
    p->next=e;
    Poka(H);
}