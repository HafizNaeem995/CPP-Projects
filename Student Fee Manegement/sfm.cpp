#include<iostream>
using namespace std;
string name;
string reg_no;
int smester;
string department;
void student_info()
{
	
	cout<<"Enter student name: ";
	cin>>name;
	cout<<"Enter your registration no.: ";
	cin>>reg_no;
	cout<<"Enter your department: ";
	cin>>department;
	cout<<"Enter your smester: ";
	cin>>smester;
	
	









}
int smester_fee;
int scholarship_percentage;
void fee_info()
{
	cout<<"Enter your smester fee: ";
	cin>>smester_fee;
	cout<<"Enter your scholarship percentage: ";
	cin>>scholarship_percentage;

	





}
int paid_amount;
void payment_info()
{
	cout<<"Enter amount that you have alraedy paid: ";
	cin>>paid_amount;
}
int net_fee;
int final_fee;
int scholarship_amount;
void payment_status();
void display_report();
int main()

{
	int n;
	cout<<"How many students fee that you want to calculate: ";
	cin>>n;
	for(int i =1;i<=n;i++)
{
	student_info();
	fee_info();
	payment_info();
	// scholarship calculation
	
	
	scholarship_amount  = smester_fee * scholarship_percentage /100;
	net_fee = smester_fee - scholarship_amount;
	final_fee  =  net_fee - paid_amount;
	display_report();
	payment_status();
	
	
	
}	
return 0;
}
void payment_status()
{
	if(final_fee == 0)
	{
			cout<<"Payment Status: Full Paid";
	}else if(final_fee > 0 )
			cout<<"Payment Status: Partially Paid";
	if(paid_amount == 0)
			cout<<"Payment Status: Unpaid";
	
	if(paid_amount > net_fee)
		cout<<"Approopriate error: (paid amount cannot be exceeds from final fee)";



	cout<<endl;


}
void display_report()
{
	cout<<"**STUDENT DETAILS**"<<endl;
	cout<<"Student Name: "<<name<<endl;
	cout<<"Registration No:"<<reg_no<<endl;
	cout<<"Department:"<<department<<endl;
	cout<<"Smester: "<<smester<<endl;
	cout<<"Smester fee: "<<smester_fee<<endl;
	cout<<"Scholrship Percentage: "<<scholarship_percentage<<endl;
	cout<<"Scholarship Amount: "<<scholarship_amount<<endl;
	cout<<"Final Payable fee: "<<net_fee<<endl;
	cout<<"Already Paid Amount: "<<paid_amount<<endl;
	cout<<"Remaining Dues: "<<final_fee<<endl;
	
	








}