#include<stdio.h>

void main(){
int year;
printf("Enter the year to be checked : ");
scanf("%d",&year);
if(year%4==0){
printf("%d is a leap year!",year);
}
else{
printf("%d is not a leap year!",year);}
}