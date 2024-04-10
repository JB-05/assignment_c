#include<stdio.h>

void main(){
int a,b,c;
printf("Enter side one of the triangle : ");
scanf("%d",&a);
printf("Enter side two of the triangle : ");
scanf("%d",&b);
printf("Enter side three of the triangle : ");
scanf("%d",&c);
if(a==b && a!=c){
printf("It is an isoscles triangle!");
}
else if(b==c && b!=a){
printf("It is an isoscles triangle!");
}
else if(a==c && a!=b){
printf("It is an isoscles triangle!");
}
else{
printf("not an isoceles triangle");
}
}