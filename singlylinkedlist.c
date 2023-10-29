#include<stdio.h>
#include<stdlib.h>
struct node
{
    int *data;
    struct node *next;
};
struct node *head,*travel,*itr;
int count()
{
    int c=0;
    for(itr=head;itr!=NULL;itr=itr->next)
        c++;
    return c;
}
void creation(int num)
{
    struct node *newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    newnode->data=num;
    newnode->next=NULL;
    if(head==NULL)
    {
    head=newnode;
    travel=newnode;
    }
    else
    {
    travel->next=newnode;
    travel=newnode;
    }
}
void insertion(int num,int pos)
{
    struct node *newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    newnode->data=num;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else if(pos==(count()+1))
    {
        itr=head;
        while(itr->next!=NULL)
        {
            itr=itr->next;
        }
        itr->next=newnode;
        newnode->next=NULL;
    }
    else
    {
        int cnt=0;
        for(itr=head;itr!=NULL;itr=itr->next)
        {
            cnt++;
            if(cnt==pos)
            {
                struct node *temp=itr->next;
                itr->next=newnode;
                newnode->next=temp;
            }
        }
    }
}
void display()
{
    for(itr=head;itr!=NULL;itr=itr->next)
        printf("%d ",itr->data);
    printf("\n");
}
void search(int num)
{
    int cnt=0;
    for(itr=head;itr!=NULL;itr=itr->next)
    {
        cnt++;
        if(itr->data==num)
            printf("%d found at position %d\n",num,cnt);
    }
}
void deletion(int num)
{
    struct node *help,*temp;
    if(head->data==num)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
    for(itr=head;itr!=NULL;help=itr,itr=itr->next)
    {
        if(itr->data==num)
        {
            temp=itr;
            help->next=itr->next;
            free(temp);
        }
    }
    }
}
int main()
{
    int choice;
    do{
        printf("1.Creation\n2.Insertion\n3.Search\n4.Deletion\n5.Display\n6.Exit\n")   ;
        printf("Enter your choice : ");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
        int x;
        printf("Enter a Element to Create: ");
        scanf("%d",&x);
        creation(x);
        break;
        }
        case 2: 
        {
            int x,pos;
            printf("Enter the Element and Position to insert: ");
            scanf("%d%d",&x,&pos);
            insertion(x,pos);
            break;
        }
        case 3: 
        {
            int x;
            printf("Enter the Element to search: ");
            scanf("%d",&x);
            search(x);
            break;
        }
        case 4: 
        {
            int x;
            printf("Enter the Element to delete: ");
            scanf("%d",&x);
            deletion(x);
            break;
        }
        case 5: 
        {
            display();
            break;
        }
        case 6: 
        {
            exit(0);
        }
        
    }
    }while(choice!=6);
}

/*

1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 1
Enter a Element to Create: 10
1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 2
Enter the Element and Position to insert: 20 2
1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 2
Enter the Element and Position to insert: 30 3
1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 3
Enter the Element to search: 20
20 found at position 2
1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 4
Enter the Element to delete: 30
1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 5
10 20 
1.Creation
2.Insertion
3.Search
4.Deletion
5.Display
6.Exit
Enter your choice : 6

*/
