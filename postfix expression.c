#include <stdio.h>
#include <ctype.h>
int top=-1;
float stack[20];
void push(float);
float pop();
int main()
{
	float answer,operand1,operand2,val;
	char str[20],opr;
	int i;
	puts("Enter postfix expression:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		opr=str[i];
		if(isalpha(str[i]))
		{
			printf("\n%c=",str[i]);
			scanf("%f",&val);
			push(val);
		}
		else
		{
			operand2=pop();
			operand1=pop();
			switch(opr)
			{
				case'+':push(operand1+operand2);
				break;
				case'-':push(operand1-operand2);
				break;
				case'*':push(operand1*operand2);
				break;
				case'/':push(operand1/operand2);
				break;
				default:printf("only basic operations allowed:\n");
			}
		}
	}
	answer=pop();
	printf("The answer is:%0.2f",answer);
}
void push(float val)
{
	top=top+1;
	stack[top]=val;
}
	float pop()
	{
		float val=stack[top];
		top--;
		return val;
	}
