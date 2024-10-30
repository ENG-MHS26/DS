#include <iostream>

using namespace std;
template<class T>
class Node
{
    public:
        T info;
        Node* next;
        Node(T in, Node*  n=0)
        {
            info = in;
            next = n;
        }
};
template<class T>
class SLL
{
    Node<T>* head, *tail;

public:
    SLL(){head = tail=0;}
    void addToTail(T item)
    {
        Node<T>* n = new Node<T>(item);
        if(head ==0)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }
    void display()
    {
        Node<T>* p = head;
        cout<<"List:";
        while(p!=0)
        {
            cout<<p->info<<" ";
            p = p->next;
        }
        cout<<endl;
    }

};
int main()
{
    SLL<string> L;
    L.addToTail("I");
    L.addToTail("am");
    L.addToTail("in");
    L.addToTail("lecture");
    L.display();
    return 0;
}