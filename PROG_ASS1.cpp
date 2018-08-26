#include <iostream>
using namespace std;

int main()
{
	char op;
	int mode,n;
	float num1, num2;
	bool isEven;
	
	cout<<"Enter mode (1 - OddEven, 2-Calculator)";
	cin>>mode;
	
	if(mode==1){
	// Odd Even MOde
		cout<<"Enter an interger.";
		cin>>n;
		isEven = n % 2 == 0;
		
		if(isEven){
		cout<<n<<"is even";
		}else{
		cout<<n<<"is odd";
		}
		
	}else if (mode==2){
	//Calculator Mode
	cout<<"Enter operator either + or - or * or /:";
	cin>>op;
	
	cout<<"Enter two operands:";
	cin>>num1>>num2;
	
	switch(op)
	{
	case '+':
	cout<<num1+num2;
	break;
	
	case'-':
	cout<<num1-num2;
	break;
	
	case'*':
	cout<<num1*num2;
	break;
	
	case'/':
	cout<<num1/num2;
	break;
	
	default:
	// if the operator is other than +,-,* or /, error message is shown
	cout<<"Error! operator is not correct";
	break;
	}
	
	}else{
	// Error
	cout<<"Error! mode is not correct";
	}
	
	return 0;
}
