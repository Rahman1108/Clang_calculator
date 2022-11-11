#include<stdio.h>
#include<stdlib.h>

int main(){
float var1,var2,result=0;
char operator;
printf("***Enjoy the Experience of Calculation***\n");
printf("Enter the expression to calculate : \n");
scanf("%f %c %f",&var1,&operator,&var2);

 switch (operator){
case '+': result = var1 + var2;
break;
case '-': result = var1 - var2;
break;
case '*': result = var1 * var2;
break;
case '/': result = var1 / var2;
break;
default : printf("choose correct value ");
break;
}

printf("%.2f %c %.2f = %.3f ",var1,operator,var2,result);
}