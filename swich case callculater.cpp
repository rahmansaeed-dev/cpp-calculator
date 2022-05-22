#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1,num2;
	cout<<"\t\t\t\t**********Welcome in Simple Calculater********"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Please Select these operator eather '+' or '-' or '*' and '/' other operater '%,#,$,&' are not Allowd! "<<endl;
	cin>>op;
	cout<<"Please Enter Two number "<<endl;
	cin>>num1>>num2;
	switch(op)
	{
	case '+':
	cout<<num1+num2;
	break;
	case '-':
	cout<<num1-num2;
	break;
	case '*':
	cout<<num1*num2;
	break;
	case '/':
	cout<<num1/num2;
	break;
	default:
	cout<<"Enter! Operater not Correct Please select Valid Operater ";
	break;
	}
	system("pause>0");
}
