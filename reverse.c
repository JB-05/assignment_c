#include<stdio.h>

void main(){
int a,temp1=0,temp2=0,rev=0;
printf("Enter a natural number : ");
scanf("%d",&a);
temp2=a;
while(temp2!=0){
temp1=temp2%10;
rev=(rev*10)+temp1;
temp2=temp2/10;

}
printf("Rverse of %d is %d",a,rev);
}