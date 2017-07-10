#include <iostream>
using namespace std;

int main()
{
	double soda, powder, butter, sugar, egg;
	double ratio;

	cout << "ORIGINAL RECIPE: \n";
	cout << "\t 1 tsp        baking soda \n";
	cout << "\t 1/2 tsp      baking powder \n";
	cout << "\t 1 c          butter \n";
	cout << "\t 1 1/2 c      white sugar \n";
	cout << "\t 1            egg \n";

	cout << "\n" << "\n";

	cout << "How many batches of cookies would you like to make? \t";
	cin >> ratio;

	soda = (1.0 * ratio);
	powder = (0.5 * ratio);
	butter = (1.0 * ratio);
	sugar = (1.5 * ratio);
	egg = (1.0 * ratio);

	cout << soda << " tsp baking soda \n";
	cout << powder << " tsp baking powder \n";
	cout << butter << " cups of butter \n";
	cout << sugar << " cups of white sugar \n";
	cout << egg << " egg \n";

	while (true);
	return 0;
}