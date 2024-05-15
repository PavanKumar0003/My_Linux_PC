#include<stdio.h>
#include<stdlib.h>

struct student
{
    int ID;
    char name[10];
    struct student *next;
};

void Traversal(struct student *);
struct student *CreatNode();

int c=0;

int main()
{
    char ch;
    struct student *Head=NULL,*new=NULL,*tail=NULL;
    printf("\t:::::List Creation Started:::::\n");
    while(ch!='n')
    {
        new = CreatNode();
        if(Head==NULL)
            Head = new;        //Creating HEAD.
        else
            tail->next = new;  //Copy new location address to next variable in Tail.
        tail = new;            //Jump tail to new location.
        printf("\nDo u want to continue y/n:");
        scanf(" %c",&ch);
    }
    Traversal(Head);
    return 0;
}

struct student *CreatNode()
{
    struct student *new=NULL;
   /*1.Node Creation*/
    new = (struct student *)malloc(sizeof(struct student));
    printf("Enter ID:");
    scanf("%d",&new->ID);
    printf("Enter Name:");
    scanf("%s",&new->name);
    new->next = NULL; 
    return new;
}

void Traversal(struct student *T)
{
    printf("\n::::List is::::");
    while(T)
    {
        printf("ID:%d\tname:%s\n",T->ID,T->name);
        T=T->next;
    }
}