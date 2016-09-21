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
	bool compare(String Tank);
	void append(String Tank);
	void prepend(String Tank);
	bool Up();
	bool Low();
	bool findsubstring();
	int findsubstring(char *Tank);
	void setstring(char[]);
	bool findSubStringIndex(int, char *);
	const char * constCStyle();

};