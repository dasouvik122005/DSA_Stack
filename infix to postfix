#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

char stack[MAX];
char infix[MAX], postfix[MAX];
int top=-1;

int precedence(char symbol);
int isOperator(char symbol);
void intopostfix();
void push(char symbol);
char pop();

int main()
{
    printf("Enter the infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0'; // Remove trailing newline character
    intopostfix();
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
void intopostfix()
{   
    int j=0;
    char symbol,next;
    for(int i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        switch(symbol)
        {
            case '(':
                push(symbol);
                break;
            
            case ')':
                while((next=pop())!='(')
                    postfix[j++] = next;
            default:
                if(isOperator(symbol))
                {
                    while(top != -1 && precedence(stack[top]) >= precedence(symbol))
                        postfix[j++] = pop();
                    push(symbol);
                } else 
                {
                    postfix[j++] = symbol;
                }
                break;
        }
    }
    while(top != -1)
        postfix[j++] = pop();
    postfix[j] = '\0';
}

int precedence(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

int isOperator(char symbol)
{
    return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');
}

void push(char symbol)
{
    if(top == MAX-1)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = symbol;
}

char pop()
{
    if(top == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}
