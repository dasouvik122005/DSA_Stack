#include<stdio.h>
#define size 5
int stack[size];
int tos=-1,item;

void push(int item)
{ 
    if (tos == size)
    {
        printf("Stack Overflow...\n");
    } 
    else
    {
        tos++;
        stack[tos] = item;
    }
}    

int pop()
{
    if (tos==-1)
    {
        printf("Stack Underflow...\n");
        return 0 ;
    } 
    else 
    {
        item=stack[tos];
        tos--;
    }
    return(item);    
}

void display()
{
    int i;
    for(i=tos;stack[i]!=0;i--)
     {
         printf("\n%d",stack[i]);
     }
}

int main()
{
    int choice,item;

    while(1)
    {
        printf("\n1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
    
        switch(choice)
        {
            case 1:
                printf("Enter the value(push): ");
                scanf("%d",&item);
                push(item);
                break;

            case 2:
                pop();
                break;
                            
            case 3:
                display();
                break;
         
            case 4:
                return 0;
                break;        
                
            default:
                printf("Invalid choice.please try again\n ");
        }    
    }
    return 0;
}
