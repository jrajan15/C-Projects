# include <stdio.h>
# include <stdlib.h>

void main() {

double num1;
double num2;
char op;
printf("Enter a number: ");
scanf("%lf", &num1);
printf("\nEnter an operator: ");
scanf(" %c", &op);
printf("\nEnter another number: ");
scanf("%lf", &num2);
if(op == '+'){
   printf("%f", num1 + num2);
}else if(op == '-'){
   printf("%f", num1 - num2);
}else if(op == '*'){
   printf("%f", num1 * num2);
} else if(op == '/'){
   printf("%f", num1 / num2);
}else {
   printf("Enter a proper operator");
}


} 