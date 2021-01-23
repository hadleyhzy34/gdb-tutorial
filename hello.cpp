#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
 int a=25;
 register int b=30;
 b+=5;
 b+=5;
 b+=5;
 b+=5;
 int c;
 cout<<"input value for c: ";
 cin>>c; 
 printf("address is:%p\n",&a);
 printf("address is:%p\n",&b);
 printf("hello world");
}
