#include <iostream>
#include <string>
using namespace std;

int main()
{
	string home, name;
	int len;

	cout << "What is the name of your hometown? ";
	cin >> home;
	cout << "\n";
	
	cout << home.length() << "\n";

	if (len >= 6)
	{
		cout << "That's a long name! \n";
	}

	cout << "What is your name? ";
	cin >> name;

	cout << "Hello " << name << " from " << home << "!\n";

	while (true);
	return 0;
}