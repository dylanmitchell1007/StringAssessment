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
char String::index(int T)
{

	
	return m_data[T];





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
			
			break;
		}
		if (equal == true)
		{
			break;
		}

	}
	return true;
}

//.4)
char * String::append(String str)
{
	int OriginalLength = this->m_length;
	int x;
	for (x = 0; x < str.m_length; ++x)
	{
		m_data[OriginalLength + x] = str.m_data[x];
	}
	m_data[OriginalLength + x] = '\0';
	for (int in = 0; m_data[in] != '\0'; in++)
	{
		return m_data;
	}
}

//.5) 
char * String::prepend(String str)
{
	
	int OriginalLength = this-> m_length;
	int t;
	for (t = 0; t <= m_length; ++t)
	{
		m_data[OriginalLength + t] = str.m_data[t];
	}
	m_data[OriginalLength + t] = '\0';
	return m_data;


}
//.6)

const char * String::constCStyle()
{
	const char * constCStyle = m_data;
	return  constCStyle;
}

//.7)
char * String::Up()
{
	char x = 0;
	for (int x = 0; x < Length(); ++x)
	{
		if ((int)m_data[x] >= 97 && (int)m_data[x] <= 122)
		{
			m_data[x] = m_data[x] - 32;
		}
		
	}
	
		return m_data;
	
}

//.8)

char * String::Low()
{

	for (int x = 0; x < Length(); ++x)
	{
		if ((int)m_data[x] >= 65 && (int)m_data[x] <= 90)
		{
			m_data[x] = m_data[x] + 32;
		}
	
	}
	
	return m_data;
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

	return find;
}


int String::findsubstring(char *sub)
{
	String tmp = String(sub);
	bool match = false;

	for (int x = 0; x < this->m_length; x++)
	{
		if (this->m_data[x] == sub[0])
		{
			for (int j = 0; j < tmp.Length(); j++)
			{
				if (this->m_data[x + j] == tmp.m_data[j])
				{
					match = true;
				}
				else
				{
					match = false;
				}
				if (j == tmp.Length() - 1)
					return x;
			}
		}
	}
	return 0;
}

//.10)
bool String::findSubStringIndex(char input, char * sub)
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
	
	return index;
}



void String::setstring(char set[])
{
	String tmp = String(set);
	
	int x = 0;
	for (x = 0; x < tmp.Length(); x++)
		m_data[x] = tmp.m_data[x];
	m_data[x] = '\0';
	m_length = tmp.Length();
	
}
