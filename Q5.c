#include<stdio.h>
int fib(int n);
int main(){
int n;
int x=0, y=1, i;
printf("Enter how many times you want to run");
scanf("%d",&n);
fib( n);
}
int fib(int n){
int x=0, y=1, i;
for(i=1;i<=n;++i){
	printf("%d, %d, ",x ,y);
	x+=y;
	y+=x;
}
}
