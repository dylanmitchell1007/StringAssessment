#include<iostream>
#include "String.h"

using namespace std;

int main()
{
	String();
	printf("Enter Two Different words or T, X.\n \n");
	char T[255];
	char x[255];
	cin >> T;
	cin >> x;

	String firstString = String(T);
	String secondString = String(x);


	firstString.index(0);
	// These functions don't even test all of your code
	firstString.compare(secondString);
	firstString.append(secondString);
	firstString.prepend(firstString);
	int y = firstString.Length();
	int o = secondString.Length();
	std::cout << "Length of first Entry: " << y << "\n \n";
	std::cout << "Length of second Entry: " << o << "\n \n";
	firstString.constCStyle();
	std::cout << firstString.findSubStringIndex(2, "Terminate");
	firstString.Up();
	firstString.Low();
	firstString.findsubstring();
	system("pause");
	return 0;
}



