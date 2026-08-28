/* Q25: Calculator using switch */
#include <stdio.h>
int main(){ int a,b; char op; printf("Enter expression (example: 10 + 5): "); scanf("%d %c %d",&a,&op,&b); switch(op){case '+':printf("Result = %d\n",a+b);break;case '-':printf("Result = %d\n",a-b);break;case '*':printf("Result = %d\n",a*b);break;case '/':if(b!=0)printf("Result = %d\n",a/b);else puts("Division by zero is not allowed");break;case '%':if(b!=0)printf("Result = %d\n",a%b);else puts("Division by zero is not allowed");break;default:puts("Invalid operator");} return 0; }
