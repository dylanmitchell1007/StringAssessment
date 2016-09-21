#include<iostream>
#include "String.h"

using namespace std;

int main()
 {
	String();
 	printf("Enter Two Different words or T, X.\n \n");
 	char T[255];
 	char x[255];
 	std::cin.getline(T, 255);
 	std::cin.getline(x, 255);
 	String firstString = String(T);
 	String secondString = String(x);
	
	firstString.constCStyle();
	firstString.findsubstring();
	std::cout << firstString.findSubStringIndex(2, "Terminate");
	std::cout << "Print at Index: " << firstString.index(2) << "\n \n";
	firstString.compare(secondString);
	firstString.append("<-Back");
	firstString.prepend("Front->");
	int TankT = firstString.Length();
	int TankX = secondString.Length();
	std::cout << "Length of first Entry: " << TankT << "\n \n";
	std::cout << "Length of second Entry: " << TankX << "\n \n";


	firstString.Up();
	firstString.Low();
	system("pause");
	return 0;
}


