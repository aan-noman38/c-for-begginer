 #include<stdio.h>
#include<stdlib.h>
int MAX=8;
int stack[8];
int top;
int peek()
{
return
stack[top];
}
int isempty()
{
if(top==0)
{
return 1;
}
else
{
return 0;
}
}
int isfull()
{
if(top==MAX)
{
return 1;
}
else
{
return 0;
}
}
int pop()
{
int data;
if(!isempty())
{
data=stack[top];
top=top-1;
return data;
}
else
{
printf("Could notretrieve data,Stack is empty.\n");
}
}
int push(int data)
{
if(!isfull()) {
top = top + 1;
stack[top] = data;
}
else
{
printf("Could not insert data, Stack is full.\n");
}
}
int main()
{
int i;
push(99); push(14);
push(16); push(21);
push(24); push(16);
push(12); push(10);
printf("Element at top of the stack: %d\n" ,peek());
printf("Elements: \n");
for(i=top;i>=1;i--)
{
printf(" %d\n",stack[i]);
}
printf("Stack full: %s\n" ,
isfull()?"true":"false");
printf("Stack empty: %s\n" ,
isempty()?"true":"false");
return 0;
}
