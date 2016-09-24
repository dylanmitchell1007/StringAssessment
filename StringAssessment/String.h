#pragma once

#include<iostream>

using namespace std;

class String
{
private:
<<<<<<< HEAD
		char m_data[255];
		char m_data2[255];
		int m_length;
=======
	char m_data[255];
	int m_length;
>>>>>>> origin/master
public:
	String() {};

	/*
	PARAMETER NAMES IN THE HEADER SHOULD MATCH THOSE IN THE SOURCE
	*/
	String(char * T);
	int Length();
<<<<<<< HEAD
	char index(int,int);
	bool compare(String Tank);
	void append(String Tank);
	void prepend(String Tank);
=======
	char index(int);
	bool compare(String str);
	void append(String str);
	void prepend(String str);
>>>>>>> origin/master
	bool Up();
	bool Low();
	bool findsubstring();
	int findsubstring(char *input);
	void setstring(char[]);
	bool findSubStringIndex(int, char *);
	const char * constCStyle();


};