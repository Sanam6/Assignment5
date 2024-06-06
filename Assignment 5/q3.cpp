#include<iostream>
using namespace std;
int main()
{
int a,b,num1=0,num2=0,power=1,rem;
cout<<"Enter two binary Number: "<<endl;
cin>>a>>b;
while(a!=0||b!=0){
    if(a!=0){
         rem = a % 10;
             num1 = num1 + rem*power;
        a /= 10;
    }
    if(b!=0){
         rem = b % 10;
         num2 = num2 + rem*power;
        b /= 10;
    }
    power*=2;
}
if(num1>num2){
    cout<<"Greatest Number: "<<num1;
}
else if(num1==num2){
    cout<<"Both Number are equal: "<<num1<<" and "<<num2;
}
else{
    cout<<"Greatest Number: "<<num2;
}
return 0;
}