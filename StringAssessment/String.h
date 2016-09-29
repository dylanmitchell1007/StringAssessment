#pragma once

#include<iostream>

using namespace std;

class String
{
private:
	char m_data[255];
	int m_length;
public:
	String() {};

	
	String(char * T);
	int Length();
	char index(int);
	bool compare(String str);
	char * append(String str);
	char * prepend(String str);
	char *Up();
	char *Low();
	bool findsubstring();
	int findsubstring(char *sub);
	void setstring(char[]);
	bool findSubStringIndex(char input, char * sub);
	const char * constCStyle();


};