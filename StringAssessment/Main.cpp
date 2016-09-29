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

	const char* sentence = "this is a sentence";
	

	String firstString = String(T);
	String secondString = String(x);
	std::cout << "Length of first Entry: " << firstString.Length() << "\n \n";
	std::cout << "Length of second Entry: " << secondString.Length() << "\n \n";
	std::cout << "Print Index frist Entry: " << firstString.index(0) << "\n \n";
	std::cout << "Print Index frist Entry: " << secondString.index(0) << "\n \n";
	cout << "\n ";
	cout << "\>Constant Character< \n \n";
	cout << firstString.constCStyle();
	cout << "\n \n";
	cout << ">UpperCases The Entrys< \n";
	cout <<  firstString.Up()<< "\n";
	cout << secondString.Up()<< "\n";
	cout << "\n \n";
	cout << ">LowerCases The Entrys< \n \n";
	cout << firstString.Low() << "\n";
	cout << secondString.Low()<<"\n";
	cout << "\n \n";
	firstString.compare(secondString);
	cout << ">Appends The Entrys< \n ";
	cout << firstString.append(secondString)<<"\n \n";
	cout << ">Prepends The Entrys< \n ";
	cout << secondString.prepend(firstString)<< "\n \n";
	cout << "\n ";
	std::cout << firstString.findSubStringIndex(2, "Terminate");
	firstString.findsubstring();
	std::cout << firstString.findsubstring();
	

	cout << "\n \n";
	system("pause");
	return 0;
}



