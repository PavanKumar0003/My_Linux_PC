#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Node.h"
struct student
{
    int ID;
    char name[10];
    struct student *next;
};

/*Function declarations*/
struct student *nodeCreation();
void Traversal(struct student *);
void InsertPos(struct student **, int );  
void InsertbeforeKey(struct student **, int ); 
void InsertafterKey(struct student **, int );
void deleteNodePos(struct student **,int );
void deleteNodekey(struct student **,int );
void ReverseList(struct student **Head);
void RevprintList(struct student *head);

int main()
{
    struct student *Head=NULL,*new=NULL,*Tail=NULL;
    char ch;
    int Data,select;
    while(1)
    {
    printf("\t\t:::::::::::::::::Welcome to Linked List:::::::::::::::::\n");
    printf("\t0.Creat node\n");
    printf("\t1.Insert Node Position\n");
    printf("\t2.Insert Node before Key\n");
    printf("\t3.Insert Node after Key\n");
    printf("\t4.Delete Node Position\n");
    printf("\t5.Delete Node Key\n");
    printf("\t6.Reverse the List Key\n");
    printf("\t7.Exit\n");
    printf("\nEnter your Option:");
    scanf("%d",&select);
    switch(select)
    {
    case 0:
    printf("\t:::::List Creation Started:::::\n");
    while(ch!='n')
    {
        new = nodeCreation();
        printf("Enter ID:");
        scanf("%d",&new->ID);
        printf("Enter Name:");
        scanf("%s",new->name);
        if(Head == NULL)
            Head = new;     //make new Head
        else
            Tail->next = new;       //copy new' address to Tail
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

    case 2:
    printf("Available List is:\n");
    Traversal(Head);
    printf("Enter Position/or Key:");
    scanf("%d",&Data);
    InsertbeforeKey(&Head,Data); 
    printf("List after Insertion before key %d is: \n:",Data);
    Traversal(Head);
        break;

    case 3:
    printf("Available List is:\n");
    Traversal(Head);
    printf("Enter Position/or Key:");
    scanf("%d",&Data);
    InsertafterKey(&Head,Data);  
    printf("List after Insertion after key %d is: \n:",Data);
    Traversal(Head);
        break;

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
    printf("Enter Position/or Key:");
    scanf("%d",&Data);
    deleteNodekey(&Head,Data);
    printf("List after Deleting node Key %d is: \n:",Data);
    Traversal(Head);
        break;
    
    case 6:
    printf("Available List is:\n");
    Traversal(Head);
    ReverseList(&Head);
    printf("List after Reversing is: \n");
    Traversal(Head);
        break;

    case 7:
    exit(0);
        break;

    default: 
    printf("XXXXXXXXXX Invalid Selection XXXXXXXXXX\n");
        break;
    }
    }
    return 0;
}

struct student *nodeCreation()
{
    struct student *new=NULL;
    new=(struct student*)malloc(sizeof(struct student));   //Creating new node
    new->next = NULL;
    return new;
}

void Traversal(struct student *T)
{
    printf("\n:::: Traversal is::::\n");
    while(T)
    {
        printf("ID:%d\tname:%s\n",T->ID,T->name);
        T=T->next;
    }
}

void InsertPos(struct student **T, int Pos)
{
    int i=1;
    struct student *newNode = NULL,*Tempnode=*T,*TempHead=*T,*Tempnewnode=NULL;
    newNode = nodeCreation();
    printf("\n Enter Node ID:");
    scanf("%d",&newNode->ID);
    printf("Enter Node Name:");
    scanf("%s",newNode->name);
    newNode->next = NULL;
    Tempnode = TempHead->next;
    if(Pos == 1)
    {
        newNode->next = *T;
        *T = newNode;
    }
    else
    {
        /*Prev Pos Travesal*/
        while(i<Pos-1)
        {
            TempHead = TempHead->next;
            i++;
        }  
        newNode->next = TempHead->next;
        TempHead->next = newNode;
    }
}

void InsertbeforeKey(struct student **T, int Key)
{
    int i=1;
    struct student *newNode = NULL,*Tempnode,*TempHead = *T;
    newNode = nodeCreation();
    printf("\n Enter Node ID:");
    scanf("%d",&newNode->ID);
    printf("Enter Node Name:");
    scanf("%s",newNode->name);
    newNode->next = NULL;
    Tempnode = TempHead->next;
    if(Key==1)
    {
        newNode->next = *T;
        *T = newNode;
    }
    else
    {
        /*Prev Pos Traversal*/
        while(Tempnode->ID != Key)
        {
            TempHead = TempHead->next;
            Tempnode= Tempnode->next;
        }
        TempHead->next = newNode;          /*Copy new node add to T->next*/
        newNode->next = Tempnode;   /*Copy Pos address from temporary structure variable to new-> next*/
    }
}

void InsertafterKey(struct student **T, int Key)
{
    int i=1;
    struct student *newNode = NULL,*Tempnode,*t,*TempHead = *T;
    newNode = (struct student *)malloc(sizeof(struct student));
    printf("\n Enter Node ID:");
    scanf("%d",&newNode->ID);
    printf("Enter Node Name:");
    scanf("%s",newNode->name);
    newNode->next = NULL;

    Tempnode = TempHead->next;
    if(Key==1)
    {
        newNode->next = TempHead->next;
        TempHead->next = newNode;
    }
    else
    {
        //*Prev Pos Traversal*/
        while(Tempnode->ID != Key)
        {
            TempHead = TempHead->next;
            Tempnode= Tempnode->next;
        }
        newNode->next = Tempnode->next;    /*Copy Pos address from temporary structure variable to new-> next*/
        Tempnode->next = newNode;   /*Copy new node add to T->next*/
    }
}

void deleteNodePos(struct student **T,int Pos)
{
    int i=1;
    struct student *tempVar = *T,*temp2=NULL;
    /*Up Predessor for a given position node*/
    if(Pos == 1)
    {
        printf("xxx");
        temp2 = *T;
        *T = temp2->next;
        free(temp2);
    }
    else{
        while(i<Pos-1)
        {
            /*Travers to Predesor*/
            tempVar = tempVar->next;  
            i++;
        }
        temp2 = tempVar->next;
        tempVar->next = temp2->next;
        free(temp2);
    }
}

void deleteNodekey(struct student **T,int Key)
{
    int i=1;
    struct student *tempVar = (*T)->next,*tempHead = *T;
    /*Up Predessor for a given position node*/
    if(Key==1)
    {
        tempVar = *T;
        (*T) = tempVar->next;
        free(tempVar);
    }
    else
    {
        while(tempVar->ID != Key)
        {
            /*Travers to Predesor*/
            tempHead = tempHead->next;
            tempVar = tempVar->next;  
        }
        tempHead->next = tempVar->next;
        free(tempVar);
    }
}

void ReverseList(struct student **Head)
{
    struct student *next=NULL,*Present = *Head,*Previous = NULL;
    while(Present!=NULL)
    {
        next = Present->next;
        Present->next = Previous;
        Previous = Present;
        Present = next;
    }
    *Head = Previous;
    RevprintList(Present); 
}

void RevprintList(struct student *head) 
{
    while (head != NULL) {
        printf("%d ", head->ID);
        head = head->next;
    }
    printf("\n");
}