#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	int count=0;
	int sum=0;
	int lastdigit;
	cout<<"Enter a n number n :";
	cin>>n;
	int a=n;
while(n>0){
	lastdigit=n%10;
	count++;
	n=n/10;
}
  a=n;
while(a>0){
	lastdigit=n%10;
	sum=sum+pow(lastdigit,count);
	n=n/10;
}
     if(sum==a)
     cout<<"Number is armstrong ";
     else
     cout<<"Number is not armstrong";
     return 0;
 }
