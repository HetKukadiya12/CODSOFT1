#include<iostream>
using namespace std;
int main()
{
	int a, b;//a and b will store operand
	char answer; // This will store operator choice

	cout << "Enter First Number : ";
	cin >> a;
	cout << "Enter First Number : ";
	cin >> b;
//choice of operation 
	cout << "Enter 1 for Addition " << endl;
	cout << "Enter 2 for Subtraction " << endl;
	cout << "Enter 3 for Multiplication " << endl;
	cout << "Enter 4 for Division " << endl;

	cout << "Which Operation Do you Want : ";
	cin >> answer;

	switch (answer)
	{
	case '1':
		cout << a + b;
		break;
	case '2':
		cout << a - b;
		break;
	case '3':
		cout << a * b;
		break;
	case '4':
		cout << a / b;
		break;

	default:
		cout<<"Operation is not Valid ";
		break;

	}

	return 0;


}
