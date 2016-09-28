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

	/*
	PARAMETER NAMES IN THE HEADER SHOULD MATCH THOSE IN THE SOURCE
	*/
	String(char * T);
	int Length();
	char index(int);
	bool compare(String str);
	void append(String str);
	void prepend(String str);
	char *Up();
	char *Low();
	bool findsubstring();
	int findsubstring(char *sub);
	void setstring(char[]);
	bool findSubStringIndex(char input, char * sub);
	const char * constCStyle();


};