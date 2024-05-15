#include<stdio.h>
#include<stdlib.h>

struct student{
    struct student *prev;
    int ID;
    struct student *next;
};

struct student *Createnode();
void Traversal(struct student *);
void InsertPos(struct student **Head,int pos);
void deleteNodePos(struct student **Head,int pos);
void deleteNodePosLast(struct student **Head);
int getListSize(struct student *Head);

int main(){
    struct student *new = NULL,*Head = NULL,*Tail=NULL;
    char ch;
    int Data,select;
    while(1)
    {
    printf("\t\t:::::::::::::::::Welcome to Double Linked List:::::::::::::::::\n");
    printf("\t0.Creat node\n");
    printf("\t1.Insert Node Position\n");
    // printf("\t2.Insert Node before Key\n");
    // printf("\t3.Insert Node after Key\n");
    printf("\t4.Delete Node Position\n");
    printf("\t5.Delete Last Node Position\n");
    // printf("\t5.Delete Node Key\n");
    printf("\t6.Exit\n");
    printf("\nEnter your Option:");
    scanf("%d",&select);
    switch(select)
    {
    case 0:
    printf("\t:::::List Creation Started:::::\n");
    while(ch!='n')
    {
        new = Createnode();
        printf("Enter ID:");
        scanf("%d",&new->ID);
        new->next = NULL;
        if(Head == NULL){
            Head = new;     //make new Head
            Head->prev = NULL;
        }
        else{
            Tail->next = new;       //copy new' address to Tail
            new->prev = Tail;
        }
        Tail = new;
        printf("Do u want to continue(y/n):");
        getchar();
        scanf("%c",&ch);
    }
        break;

    case 1:
    printf("Available List is:\n");
    Traversal(Head);
    printf("Enter Position/or Key:");
    scanf("%d",&Data);
    InsertPos(&Head,Data);  
    printf("List after Insertion at position %d is: \n:",Data);
    Traversal(Head);
        break;

    // case 2:
    // printf("Available List is:\n");
    // Traversal(Head);
    // printf("Enter Position/or Key:");
    // scanf("%d",&Data);
    // InsertbeforeKey(&Head,Data); 
    // printf("List after Insertion before key %d is: \n:",Data);
    // Traversal(Head);
    //     break;

    // case 3:
    // printf("Available List is:\n");
    // Traversal(Head);
    // printf("Enter Position/or Key:");
    // scanf("%d",&Data);
    // InsertafterKey(&Head,Data);  
    // printf("List after Insertion after key %d is: \n:",Data);
    // Traversal(Head);
    //     break;

    case 4:
    printf("Available List is:\n");
    Traversal(Head);
    printf("Enter Position/or Key:");
    scanf("%d",&Data);
    deleteNodePos(&Head,Data); 
    printf("List after Deleting node at position %d is: \n:",Data);
    Traversal(Head);
        break;

    case 5:
    printf("Available List is:\n");
    Traversal(Head);
    deleteNodePosLast(&Head); 
    printf("List after Deleting node at position %d is: \n:",Data);
    Traversal(Head);
        break;

    // case 5:
    // printf("Available List is:\n");
    // Traversal(Head);
    // printf("Enter Position/or Key:");
    // scanf("%d",&Data);
    // deleteNodekey(&Head,Data);
    // printf("List after Deleting node Key %d is: \n:",Data);
    // Traversal(Head);
    //     break;

    case 6:
    exit(0);
        break;

    default: 
    printf("XXXXXXXXXX Invalid Selection XXXXXXXXXX\n");
        break;
    } //Switch
    } //While

    return 0;

}

struct student *Createnode(){
    struct student *new;
    new = (struct student *)malloc(sizeof(struct student));
    return new;
}

void Traversal(struct student *T){
    printf("\n::::List is::::\n");
    while(T){
        printf("Node ID:%d\n",T->ID);
        T=T->next;
    }
}


void InsertPos(struct student **Head,int pos){
    int i=1;
    struct student *new=NULL,*TempHead=*Head;
    new = Createnode();
    printf("Enter node ID:");
    scanf("%d",&new->ID);
    if(pos==1){
        new->prev = NULL;
        (*Head)->prev = new;
        new->next = *Head;
        *Head = new;
    }
    else{
        while(i!=(pos-1)){
            TempHead = TempHead->next;
            i++;
        }
        new->next = TempHead->next;
        new->prev =TempHead;
        TempHead->next = new;
    }
}

void deleteNodePos(struct student **Head,int pos){
    int i=1,x=0;
    struct student *TempHead=*Head,*t2=NULL;
    printf("Size of List:%d\n",getListSize(TempHead));
    if(pos==1){
        *Head = TempHead->next;
        free((*Head)->prev);
    }
    else{
        while(i<pos){
            TempHead = TempHead->next;
            i++;
        }
        t2 = TempHead->prev;
        
        t2->next = TempHead->next;
        (TempHead->next)->prev = t2;
        free(TempHead);
        TempHead = NULL;
    }

}

void deleteNodePosLast(struct student **Head){
    int i=1,x=0;
    struct student *TempHead=*Head,*t2=NULL;
    while(TempHead->next != NULL)
        TempHead = TempHead->next;
    TempHead->prev->next = NULL;
    free(TempHead);
}

int getListSize(struct student *Head){
    struct student *TempHead = Head;
    int c=0;
    while(TempHead == NULL){
        c++;
        TempHead = TempHead->next;
    }
    return c;
}