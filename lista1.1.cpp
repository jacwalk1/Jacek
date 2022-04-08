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
    node* p = new node;
    p->val = x;
    p->next = H;
    H=p;
}
int main()
{
    node* H = NULL;
    H=new node;
    H->val = 4;
    H->next=NULL;
    node* p = new node;
    p->val = 2;
    p->next = H;
    H=p;
    //cout<<H->val<<endl;
    Poka(H);
    Dodaj(H->next, 2);
    Dodaj(H->next->next, 4);
    Dodaj(H->next->next, 4);
    Dodaj(H->next->next, 4);
    Poka(H);
}