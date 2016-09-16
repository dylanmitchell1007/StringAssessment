#include<iostream>
#include "String.h"		

//CREATE A BASIC STRING UTILITY CLASS THAT WILL MAKE WORKING WITH
//CHARACTER ARRAYS EASIER TO MANAGE.
//SHOULD CONTAIN THE FUNCTIONS LISTED ON STRING CLASS REQUIREMENTS

String::String(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	
	{
		m_data == str;


		 
	}
	str[0];
	str[1];
	str[2];
	str[3];
	str[4];
	str[5];
	str[6];
	str[7];

	// TODO: Set 'm_data' equal to the value of 'str'
}
/* TODO: Write Loop Conditional */
int String::Length()
{
	for (int i = 0; i < '\0'; i++)
	{
		if (m_data[i] != '\0')
			break;
		cout << m_data[i]; "\n";
		return i;
	}
	
}

//2. Certain Index
int CertainIndex()
{
	char test[] = "whateverasdfdsf";	//StringleLength
	int i = 0;
	while (test[i] != '\0')
	{
		i++;
	}
	cout << test[0] << "\n";
	return 0;


}
//3. String Compare
int StringCompare()
{
	bool run = true;

	char strCp[] = "up";

	char strCp2[] = "down";

	strcmp(strCp, strCp2);

	int i = 0;

	while (run = true)
	{
		if (strCp[i] < strCp2[i])
		{
			cout << strCp;
		}

		if (strCp[i] > strCp2[i])
		{
			cout << strCp2;
		}

		if (strCp[i] == strCp2[i])
		{
			cout << "Same";
		}
		else
		{
			i++;

			return 0;	//console prints out down.
		}

	}

}
//4. Append to String to another.
int AppendtoAnother()
{


	char coke[] = "Drink";
	char cola[] = "soda";

	strcpy_s(coke, cola);

	coke[0];

	int i;

	i = 1;

	while ("cola  != 0");

	++i;

	return 0;
}


