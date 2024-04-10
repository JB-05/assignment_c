#include<stdio.h>

int main(){
int a,i,n=0;
printf("Enter the number to be checked : ");
scanf("%d",&a);
if(a==0 || a==1)
{
printf("neither prime nor composite");
}
else
{
for(i=a;i>0;i--)
{
if(a%i==0)
{
n=n+1;
}
else
{
n+=0;
}
}
if(n==2)
{
printf("%d is a prime number",a);
}
else
{
printf("%d is not prime number",a);
}
}}