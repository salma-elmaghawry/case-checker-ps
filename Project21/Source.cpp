#include <iostream>

using namespace std;
int main()
{
	int n;
	char c;
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		
		cin >> c;
		if (isupper(c))
		{
			cout << "is upper" <<endl;
		}
		else if  (islower(c))
		{
			cout << "is lower"<<endl;
		}
		else
		{
			cout << "is digit"<<endl;
		}


	}
	
	
}