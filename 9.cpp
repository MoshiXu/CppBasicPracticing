#include<iostream>
using namespace std;

bool isPalindrome(int x)
{
	    int reverse = 0;
	    int initial = x;
		//int flag = 0;

		if (x < 0 || x > INT_MAX)
			//cout << "Out of range" << endl;
			return false;
			//return 0;

		//if (x < 0)
			//x *= (-1);
			//flag = 1;
			//return false;

		while (x)
		{
			reverse = reverse * 10 + x % 10;
			x /= 10;
		}

		//if (flag == 1)
			//reverse *= (-1);
		//cout << "reverse is " << reverse << endl;

		if (reverse < INT_MIN || reverse > INT_MAX)
			//cout << "Out of range" << endl;
			return false;

		//cout << "initial is " << initial << endl;
		//cout << "reverse is " << reverse << endl;

		if (initial == reverse)
			return true;
		else
			return false;
}


int main()
{
	//cout << 12 / 10 << endl;
	//cout << isPalindrome(-2147447412) << endl;
	cout << isPalindrome(0) << endl;
	//cout << isPalindrome(0) << endl;
	//cout << isPalindrome(-12344321) << endl;

	/*int n = -2147447412;
	if (n < INT_MIN || n > INT_MAX)
	//if (n < INT_MIN)
		cout << "Out of range" << endl;
	else
		cout << "No problem" << endl;
		
	int reverse = 0;
	while (n)
	{
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}
	if (reverse < INT_MIN || reverse > INT_MAX)
		cout << "Out of range" << endl;
	else
		cout << "No problem" << endl;
		*/
}
