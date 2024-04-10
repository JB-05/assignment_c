#include<stdio.h>
#include<math.h>

int main(){
int a,b,c;
float d=0,root1=0,root2=0;
printf(" ax^2 + bx + c = 0\n");
printf("Enter the coefficient of x^2 'a' : ");
scanf("%d", &a);
printf("Enter the coefficient of x 'b' : ");
scanf("%d", &b);
printf("Enter the constant 'c' : ");
scanf("%d", &c);
d=((pow(b,2))-(4*a*c));
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
if(d==0){
printf("The roots are equal and real!\n\t The roots are %f,%f ",root1,root1);
}
else if(d>0){
printf("The roots are real and distinct!\n\t The roots are %f,%f ",root1,root2);
}
else{
printf("The roots are complex!\n");
printf("i*%f,i*%f",root1,root2);
}
return 0;
}