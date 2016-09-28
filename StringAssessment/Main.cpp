#include<iostream>
#include "String.h"

using namespace std;

int main()
{
	String();
	printf("Enter Two Different words \n \n");
	char T[255];
	char x[255];
	cin >> T;
	cin >> x;

	String firstString = String(T);
	String secondString = String(x);
	
	std::cout << "Length of first Entry: " << firstString.Length() << "\n \n";
	std::cout << "Length of second Entry: " << secondString.Length() << "\n \n";
	firstString.index(0);
	// These functions don't even test all of your code
	firstString.compare(secondString);
	cout << ">Appends The Entrys< \n";
	firstString.append(secondString);
	cout << ">Prepends The Entrys< \n";
	firstString.prepend(secondString);
	cout << "\n \n";
	cout << ">UpperCases The Entrys< \n";
	cout <<  firstString.Up();
	cout << secondString.Up();
	cout << "\n \n";
	cout << ">LowerCases The Entrys< \n \n";
	cout << firstString.Low();
	cout << secondString.Low();
	cout << "\n \n";
	cout << "\>Constant Character< \n \n";
	firstString.constCStyle();
	cout << "\n \n";
	std::cout << firstString.findSubStringIndex(2, "Terminate");
	firstString.findsubstring();
	std::cout << firstString.findsubstring();
	

	cout << "\n \n";
	system("pause");
	return 0;
}



