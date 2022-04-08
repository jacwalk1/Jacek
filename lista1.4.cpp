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
void Zamieszaj(node* H)
{
     struct node* temp = H;
    //gdy istnieją przynajmniej 2 węzły
    while (temp != NULL && temp->next != NULL) 
    {
    //Zamień dane węzła z danymi następnego węzła
    swap(temp->val,temp->next->val);
    //przenieś tymczasowy o 2
    temp = temp->next->next;
    }
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
    //cout<<H->next->next->val<<endl;
    Dodaj(H->next->next, 3);
    Poka(H);
    Zamieszaj(H);
    Poka(H);
}
    