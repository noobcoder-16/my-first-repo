#include<stdio.h>

 int main(){
 
 
 int i = 1;
 int n ;
 
 printf(" enter the nummber : ");
 scanf("%d", &n);
 
 while (i<=10)
 {
 	printf("%dX%d=%d\n", n,i, n*i);
 	
 	i++;
 	
 }
 
 return 0;
 
}