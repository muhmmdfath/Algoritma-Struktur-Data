#include <iostream> 
using namespace std;

class node { 
    int data;
    node* next; public:
    node() {
    };


    void SetData(int aData) { 
        data = aData;
    };

    void SetNext(node* aNext) { 
        next = aNext;
    };

    int Data() { 
        return data;
    };

    node* Next() { 
        return next;
    }
};

class List {
    node *head; public: List() {
        head = NULL;
    };
    void Print();
    void Append(int data); 
    void Delete(int data);
};

void List::Print() { 
    node *tmp = head;
    if ( tmp == NULL ) { 
        cout << "EMPTY" << endl;
        return;
    }
    if ( tmp->Next() == NULL ) { 
        cout << tmp->Data();
        cout << " --> ";
        cout << "NULL" << endl;
    } else { 
        do {
            cout << tmp->Data(); 
            cout << " --> ";
            tmp = tmp->Next();
        }
        while ( tmp != NULL ); 
            cout << "NULL" << endl;
    }
}

void List::Append(int data)
{ 
    if(data != 300) {
        node* newnode = new node(); 
        newnode->SetData(data);
        newnode->SetNext(NULL); 
        node *tmp = head;

        if ( tmp != NULL ) {
            while ( tmp->Next() != NULL ) { 
                tmp = tmp->Next();
            } 
            tmp->SetNext(newnode);

        } else {
            head = newnode;
        }
    }
}

void List::Delete(int data) { 
    if(data != 300) {
        node *tmp = head; 
        if ( tmp == NULL ) 
        return; 
        if ( tmp->Next() == NULL ) {
            delete tmp; 
            head = NULL;
        } else { 
            node *prev; 
            do {
                if ( tmp->Data() == data ) break; 
                    prev = tmp;
                    tmp = tmp->Next(); 
            } while ( tmp != NULL );
                prev->SetNext(tmp->Next());
                delete tmp; 
        }
    }
}
int main(){
    cout << "Nama : Muhammad Fatih 'Ad-Li\n"; 
    cout << "NIM : 32602200017\n\n";
    List list; 
    list.Append(100); list.Print();
    list.Append(200); list.Print();
    list.Append(400); list.Print();
    list.Append(500); list.Print();
    list.Delete(400); list.Print();
    list.Delete(200); list.Print();
    list.Delete(500); list.Print();
    list.Delete(100); list.Print();
}
