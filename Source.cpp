#include<iostream>
#include<cstdlib>
using namespace std;

/*void PassByReference(int *num);

int main()
{
	int n;
	cout << "Type a number: " << endl;
	cin >> n;

	PassByReference(&n);
	cout << "The square of this number is:" << n << endl;
}

void PassByReference(int *num)
{
	*num = (*num)*(*num);
}*/

/*long f[MAXN + 1];

long fib_c(int n)
{
	if (f[n] == UNKNOWN)
		f[n] = fib_c(n - 1) + fib_c(n - 2);
	
	return(f[n]);
}

long fib_c_driver(int n)
{
	int i;
	f[0] = 0;
	f[1] = 1;
	for (i = 2; i <= n; i++)
		f[i] = UNKNOWN;

	return(fib_c(n));
}

int main()
{
	//cout << fib_c_driver(10) << endl;
	cout << fib_c(10) << endl;
}*/

int main()
{

	srand(33);
	{
		cout << rand() << endl;
	}
}