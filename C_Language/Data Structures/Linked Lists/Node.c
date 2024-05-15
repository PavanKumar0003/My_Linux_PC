struct student *nodeCreation()
{
    struct student *new=NULL;
    new=(struct student*)malloc(sizeof(struct student));   //Creating new node
    new->next = NULL;
    return new;
}

void Traversal(struct student *T)
{
    printf("\n::::List is::::\n");
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
        Tempnewnode = TempHead->next;
        newNode->next = Tempnewnode;
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
        t = Tempnode->next;
        Tempnode->next = newNode;   /*Copy new node add to T->next*/
        newNode->next = t;    /*Copy Pos address from temporary structure variable to new-> next*/
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
