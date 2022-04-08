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
void Zamien(node*& H)
{
    struct node *current = H, *temp = NULL, *index = NULL;  
    if(H == NULL) {  
        return;  
    }  
    else {  
        //Po pętli prąd będzie wskazywał na ostatni element, a indeks na przedostatni element  
        while(current->next != NULL) {  
            index = current;  
            current = current->next;  
        }  
          //jeśli lista zawiera tylko jeden węzeł, to wyświetlaj listę taką, jaka jest  
        if(H == current) {  
            return;  
        }  
        //jeśli lista zawiera tylko dwa węzły, zamień węzeł główny z węzłem bieżącym  
        else if(H->next == current) {  
            temp = H;  
            //głowa wskaże ostatni węzeł  
            H = current;  
            //węzeł obok nowej głowy będzie ostatnim węzłem 
            H->next = temp;  
            //węzeł obok ostatniego elementu będzie pusty  
            temp->next = NULL;  
        }  
        else {  
            temp = H;  
            //głowa wskaże ostatni węzeł  
            H = current;  
            //odłącz listę od poprzedniej głowy i dodaj ją po nowej głowie 
            H->next = temp->next;  
            //poprzednia głowa stanie się ostatnim węzłem listy  
            index->next = temp;  
            //węzeł obok ostatniego elementu będzie pusty  
            temp->next = NULL;  
        }  
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
    Dodaj(H->next->next->next, 4);
    Dodaj(H->next->next->next->next, 5);
    Poka(H);
    Zamien(H);
    Poka(H);

    
    
    
}
    