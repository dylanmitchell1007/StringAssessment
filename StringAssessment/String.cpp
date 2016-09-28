#include<iostream>
#include "String.h"



String::String(char *T)
{
	int i;
	for (i = 0; T[i] != '\0'; ++i)
	{
		m_data[i] = T[i];

	}
	m_data[i] = '\0'; //null
	m_length = i;
}

//1.)
int String::Length()
{
	return m_length;
}

//2.)
char String::index(int Place, int Spot)
{

<<<<<<< HEAD
	std::cout << "Print at Index: " << m_data[Place] << m_data2[Spot] << "\n \n";
	return m_data[Place], m_data2[Spot]
		;
=======
	std::cout << "Print at Index: " << m_data[Place] << "\n \n";
	return m_data[Place];
>>>>>>> origin/master





}

//3.)

bool String::compare(String str)
{

	bool equal = true;
	for (int x = 0; x++;)
	{
		equal = (m_data[x] == str.m_data[x]) ? true : false;
		if (equal == false)
		{
			std::cout << m_data;
			break;
		}
		if (equal == true)
		{
			std::cout << "";
			break;
		}
<<<<<<< HEAD
		
=======

>>>>>>> origin/master
	}
	return true;
}

//.4
void String::append(String str)
{
	int OriginalLength = this->m_length;
	int x;
	for (x = 0; x < str.m_length; ++x)
	{
		m_data[OriginalLength + x] = str.m_data[x];
	}
	m_data[OriginalLength + x] = '\0';
	std::cout << "\n \n";
	for (int in = 0; m_data[in] != '\0'; in++)
	{
		std::cout << m_data[in];
	}
	std::cout << "\n \n";
}

//.5) 
void String::prepend(String str)
{
	
	int OriginalLength = this-> m_length;
	int t;
	for (t = 0; t < m_length; ++t)
	{
		m_data[OriginalLength + t] = str.m_data[t];
	}
	m_data[OriginalLength + t] = '\0';
	std::cout << str.m_data;
	for (int in = 0; m_data[in] != '\0'; in++)
	{
		m_data[t] = 0;
		std::cout << m_data[in];
	}
	std::cout << "\n \n";
}
//.6)

const char * String::constCStyle()
{
	const char * constCStyle = m_data;
	std::cout << constCStyle;
	return m_data;
}

//.7)
bool String::Up()
{
	int x = 0;
	std::cout << m_data;
	for (int x = 0; x < Length(); ++x)
	{
		if ((int)m_data[x] > 96 && (int)m_data[x] < 123)
		{
			m_data[x] = m_data[x] - 32;
		}
		
	}
	std::cout << m_data[x];
	std::cout << "\n \n";
	return m_data;
}

//.8)

bool String::Low()
{
	std::cout << m_data ;
	for (int x = 0; x < Length(); ++x)
	{
		if ((int)m_data[x] > 64 && (int)m_data[x] < 91)
		{
			m_data[x] = m_data[x] + 32;
		}
	
		std::cout << m_data[x];
	}
	std::cout << "\n \n";
	return 0;
}

//.9)

bool String::findsubstring()
{
	bool find = false;
	const char * sub = {};
	int x = 0;
	for (int x = 0; x < Length(); ++x)
	{
		if (m_data[x] == sub[x])
		{
			x++;
			if (x == 2)
			{
				find = true;
				break;
			}
		}
		else
		{
			x = 0;
			find = false;
		}
	}
	std::cout << "SubString: " << find << "\n \n";
	return find;
}


//int String::findsubstring(char * sub)
//{
//	String tmp = String(sub);
//	bool match = false;
//
//	for (int x = 0; x < this->m_length; x++)
//	{
//		if (this->m_data[x] == sub[0])
//		{
//			for (int j = 0; j < tmp.Length(); j++)
//			{
//				if (this->m_data[x + j] == tmp.m_data[j])
//				{
//					match = true;
//				}
//				else
//				{
//					match = false;
//				}
//				if (j == tmp.Length() - 1)
//					return x;
//			}
//		}
//	}
//	return 0;
//}

//.10)
bool String::findSubStringIndex(int input, char * sub)
{
	String temp = String(sub);
	bool index = false;
	int x = 0;
	for (int x = input; x < m_length; ++x)
	{
		if (m_data[x] == sub[x])
		{
			x++;
			if (x == temp.m_length)
			{
				index = true; //Keeps this loop going.
				break;
			}
		}
		else
		{
			x = 0;
			index = false;
		}
	}
	std::cout << "SubString at Index: " << index << "\n \n";
	return index;
}
//.11)
//NEED HELP WITH THIS ONE.... MULTIPLE ATTEMPTS AND FRUSTRATING ERRORS.
//CODE WAS SO BAD I JUST DELETED IT....
//Syntax err

//.12) 


void String::setstring(char set[])
{
	String tmp = String(set);
	
	int x = 0;
	for (x = 0; x < tmp.Length(); x++)
		m_data[x] = tmp.m_data[x];
	m_data[x] = '\0';
	m_length = tmp.Length();
	
}
