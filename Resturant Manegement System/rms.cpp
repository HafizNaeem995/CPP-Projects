#include<iostream>
using namespace std;
void displayMenu()
{	cout << "\033[1mRestaurant Manegement System\033[0m" << endl;
	cout<<"1. Burger : Rs: 500 "<<endl;
	cout<<"2. Pizza : Rs: 1200 "<<endl;
	cout<<"3. Sandwich : Rs: 300 "<<endl;
	cout<<"4. Fries : Rs : 500 "<<endl;
	cout<<"5. Cold Drink: Rs : 100"<<endl;

}
	int quantity;
	int bill  = 0;;
int userOrder()
{	
	int i,n;
	cout<<"Enter number of items that you want to order (max : 5): ";
	cin>>n;
	
	for(i=1;i<=n;i++)
		{
			
			cout<<"Select items: (1 to 5):"<<endl;
			int order;
			cin>>order;
			if(order == 1)
			{
				cout<<"Enter burger quantity: ";
				cin>>quantity;
				bill = bill +  quantity * 500;
			}else if(order == 2)
			{
				cout<<"Enter pizza qunatity: ";
				cin>>quantity;
				bill += quantity * 1200;

			}else if(order == 3)
			{
				cout<<"Enter sandwich quantity: ";
				cin>>quantity;
				bill += quantity * 300;
			}else if(order == 4)
			{
				cout<<"Enter fries quantity: ";
				cin>>quantity;
				bill += quantity * 500;
			}else if(order == 5)
			{
				cout<<"Enter cold drink quantity: ";
				cin>>quantity;
				bill += quantity * 100;
			}else
				cout<<"Invalid input";

				






		}
			cout<<"Your total bill:  "<<bill<<endl;

	





}

void discount()
{
	if(bill > 2000)
	{
		double discounted_money;
		discounted_money = bill  * 0.10;
		bill = bill - discounted_money;
		cout<<"Your discount money is: "<<discounted_money<<endl;
		cout<<"Your Payable bill after discount:  "<<bill;
		
		

	}	














}
int main()
{
	displayMenu();
	userOrder();
	discount();
	










return 0;
} 
