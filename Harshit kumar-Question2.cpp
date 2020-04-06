#include <iostream>
#include <math.h>
using namespace std;
int main(){
int num,d=0,n=0,r=0,p=0,a=1;
char choice;
cin>>num;
cin>>choice;
switch(choice)
{
 case 'a' :{
   /* n=num;
    while(n==0)
    {
     n=n/10;
     d++;
    } */
    n=num;
    while(n!=0)
    {
        r=n%10;
        a=a*sqrt(r);
        cout<<a;
        n=n/10;
    }
    break;
 }
    case 'p':{ 
    n=num;
    while(n!=0)
    {
        r=n%10;
        cout<<r;
        n=n/10;
     
    }break;
 }
}}