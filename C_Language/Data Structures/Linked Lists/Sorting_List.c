#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int id;
	char name[20];
	struct student *next;
}student;


void insert_before_key();

student * create_node(void);
void traverse(student *t);

student *head=NULL, *new = NULL, *tail=NULL;

int main()
{
	char n ='y';
	int opt,p,key;
	printf("enter student details\n");
	while(n != 'n')
	{
		if(head == NULL)
		{
			new=create_node();
			head=new;
		}
		else 
			insert_before_key();
		traverse(head);
		printf("do you want to stop enter n else enter any key(n/anykey):");
		scanf(" %c", &n);
	}
		traverse(head);
return 0;
}

void insert_before_key()
{
	student *new=NULL,*tmp=head;
	new=create_node();
	if(new->id < head->id)
	{
		new->next = head;
		head=new;
		return ;
	}
	while(1)
	{
		if(tmp->next == NULL)
		{
			tmp->next=new;
			return ;
		}
		if(new->id < tmp->next->id)
			break;
		tmp=tmp->next;
	}
	new->next=tmp->next;
	tmp->next=new;
}

student * create_node(void)
{
	student *new=NULL;
	new=(student*)malloc(sizeof(student));
	printf("ID = ");
	scanf("%d",&new->id);
	printf("Name = ");
	scanf(" %19[^\n]s",new->name);
	return new;
}

void traverse(student *t)
{
	while(t)
	{
		printf("student   ID = %d\n",t->id);
		printf("student Name = %s\n",t->name);
//		printf("next node address = %p\n",t->next);
		t=t->next;
	}
}
