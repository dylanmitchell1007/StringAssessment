#pragma once

#include<iostream>

using namespace std;

class String
{
private:
		char m_data[255];

public:

	// String(); Default Constructor
	String(char str[]);

	int Length();
	
	int AppendtoAnother();
};