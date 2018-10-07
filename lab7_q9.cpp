//including library
#include <iostream>
using namespace std;
	//stating condition for recursion
	nt factorial(int a)
{
	if(a==0)
		{
		return 1;
		}
	else
		{
		return a*factorial(a-1);
		}   
}
	//including main function
	int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;
	//including recursion condition
	cout << a << "! = "<< factorial(a) <<endl;       
	return 0;
}
