#include<iostream>
using namespace std;
int swapper();
int main()
{	
	swapper();













return 0;
}

int swapper()
{
	int num, digits, reverse = 0;
	cout<<"Enter number: ";
	cin>>num;
	while(num>0)
	{
		digits = num % 10;
		num = num/10;
		reverse = reverse * 10 + digits;
		
	}

	cout<<"Your number is: "<<reverse;;





}


