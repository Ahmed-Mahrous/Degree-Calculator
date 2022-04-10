#include <iostream>
using namespace std;

int main()
{
	int marks;
	cout << "Enter your mark \n";
	cin >> marks;

	if ((marks >= 90) && (marks <= 100))
		cout << "A \n";

	else if (marks >= 80 && marks <= 90)
		cout << "B \n";

	else if (marks >= 70 && marks <= 80)
		cout << "C \n";

	else if (marks >= 60 && marks <= 70)
		cout << "D \n";

	else
		cout << "F \n";
	system("pause");
	return 0;
}