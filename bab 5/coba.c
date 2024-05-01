#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
    // struct node * Next;
}node;


node * createlinklist(int n);
void displayList(node * head);

int main(){
    node * head = NULL;
    // printf("\npiro:");
    // scanf("%d", &n);
    head = createlinklist(200);
    createlinklist(100);
    displayList(head);
    return 0;
}


node * createlinklist(int n){
    node * head = NULL;
    node * tmp = NULL;
    node * p = NULL; 
    int i; 
    for(i=0;i<n;i++){
        tmp = (node*)malloc(sizeof(node));
        // printf ("enter data : ",i+1);
        // scanf("%d",&(tmp->data));
        tmp->data = n;
        tmp->next = NULL;

        if (head == NULL){
            head = tmp;
        }

        else{
            p = head;
            while(p->next !=NULL)
                p = p->next;
            p->next = tmp;
        }
    }
    return head;
}


void displayList(node * head){
    node * p = head;

    // while(p !=NULL){
    if ( p == NULL ) { 
        printf("EMPTY\n");
        return;
    }
    if ( p->next == NULL ) { 
        printf("%d", p->data);
        printf(" --> \n");
        printf("NULL\n");
    } else { 
        do {
            printf("%d", p->data); 
            printf(" --> ");
            p = p->next;
        }
        while ( p != NULL ); 
            printf("NULL\n");
    }
        
        
    // }

    
}