#include <iostream>
using namespace std;

int queue[100], n=100, front=-1, rear=-1;

int peek(){
    return queue[front];
}

bool isfull(){
    if (rear >= n-1){
        return true;
    }else{
        return false;
    }
}

bool isempty(){
    if ((front<0)||(front>rear)){
        return true;
    }else{
        return false;
    }
}

void enqueue(int data){
    if(isfull()){
        cout<<"Queue Penuh !";
    }else{
        front=0;
        rear=rear+1;
        queue[rear]=data;
    }
}

int dequeue(){
    int data;
    if(isempty()){
        cout<<"Queue Kosong"<<endl;
    }else{
        data=queue[front];
        front=front=1;
        cout<<"Element: "<<data<<"berhasil dihapus dari queue"<<endl;
        return data;
    }
}


void display(){
    if (isempty()){
        cout<<rear;
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Queues elemen are : ";
        for (int i = front; i <= rear; i++)
        {
            cout<<queue[i]<<" ";
        }
        
    }
}

int pilihan(){
    int pil;
    cout<<"--Pilih operasi Queue--"<<endl;
    cout<<"1. Enque\n";
    cout<<"2. Deque\n";
    cout<<"3. Display\n";
    cout<<"4. Tampilkan elemen terdepan\n";
    cout<<"5. Exit\n";
    cout<<"Masukkan pilihan : ";
    cin>>pil;
    return pil;
}



int main(){
    int pil, elemen;
    do{
        pil=pilihan();
        switch (pil)
        {
        case 1:
            cout<<"--Enque--\n";
            cout<<"Masukkan elemen data: ";
            cin>>elemen;
            enqueue(elemen);
            cout<<endl;
            break;
        case 2:
            cout<<"-Deque\n";
            dequeue();
            break;
        case 3:
            display();
            cout<<endl;
            break;
        case 4 :
            cout<<"element terdepan adalah ";
            cout<<peek()<<endl;
            break;
        }
    }while (pil!=5);
    return 0;
    
}