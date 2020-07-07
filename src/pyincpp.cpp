/*
Version: 0.5
Created by Angel Davila 7/5/2020
*/
#include "pyincpp.h"
#include <iostream>
#include <cstdarg>
#include <vector>
using namespace std;
//hello
namespace pyincpp 
{
	//String functions

	string split(string str_in, string str_search, int element)
	{
		string checkstring, temp_string, newstring[100];
		int elestore = 0, break_count = 0;

		for (char i : str_in)
		{
			checkstring = i;
			temp_string += i;
			if (temp_string.find(str_search) != string::npos)
			{
				if (checkstring == str_search)
				{
					temp_string.pop_back();
				}
				newstring[elestore] = temp_string;
				elestore++;
				temp_string = "";
			}
			break_count++;
			if (break_count == str_in.length())
			{
				newstring[elestore] = temp_string;
				elestore++;
				temp_string = "";
			}
		}
		return newstring[element];
	}

	string strip(string str_in)
	{
		string checkstring, temp_string;

		for (char i : str_in)
		{
			checkstring = i;
			if (checkstring.find(" ") == string::npos)
			{
				temp_string += i;
			}
		}
		return temp_string;
	}

	string replace(string replace_str, string element_1, string element_2)
	{
		string checkstring, temp_string, new_insert = element_2 + " ";
		int elelocation = replace_str.find(element_1), count = 0, newcount = 0;
		bool ele_status = false;
		
		for (char i : replace_str)
		{	
			if (element_1.length() > 1)
			{
				if (count == elelocation)
				{
					temp_string += new_insert;
					ele_status = true;
				}
				if (newcount == element_1.length() + 1)
				{
					ele_status = false;
				}
				if (ele_status == false)
				{
					temp_string += i;
				}
				else
				{
					newcount++;
				}
				count++;
			
			}
			else
			{
				checkstring = i;
				if (checkstring.find(element_1) != string::npos)
				{
					temp_string += element_2;
				}
				else
				{
					temp_string += i;
				}
			}
		}
		return temp_string;
	}

	//Int functions
	int sum(int *num_in, int element)
	{
		int temp_num = 0;

		for (int i = 0; i < element; i++)
		{
			temp_num += num_in[i];
		}
		return temp_num;
	}

	int print(int num_in)
	{
		cout << num_in << endl;
		return 0;
	}

	string print(string str_in)
	{
		cout << str_in << endl;
		return "";
	}

	float print(float flt_in)
	{
		cout << flt_in << endl;
		return 0.0f;
	}

	bool print(bool bool_out)
	{
		if (bool_out == 1)
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
		return false;
	}

	string lower(string str_in)
	{
		string newstring;
		int str_value;
		for (int i = 0; i < str_in.length(); i++)
		{
			if (int(str_in[i]) >= 65 && int(str_in[i]) <= 90)
			{
				str_value = int(str_in[i]) + 32;
				newstring += char(str_value);
			}
			else if (int(str_in[i]) == 32)
			{
				newstring += " ";
			}
			else
			{
				newstring += str_in[i];
			}
		}
		return newstring;
	}

	string upper(string str_in)
	{
		string newstring;
		int str_value;
		for (int i = 0; i < str_in.length(); i++)
		{
			if (int(str_in[i]) >= 97 && int(str_in[i]) <= 122)
			{
				str_value = int(str_in[i]) - 32;
				newstring += char(str_value);
			}
			else if (int(str_in[i]) == 32)
			{
				newstring += " ";
			}
			else
			{
				newstring += str_in[i];
			}
		}
		return newstring;
	}

	string capitalize(string str_in)
	{
		string newstring;
		int str_value;
		if (int(str_in[0]) >= 97 && int(str_in[0]) <= 122)
		{
			str_value = int(str_in[0]) - 32;
			newstring += char(str_value);
		}
		for (int i = 1; i < str_in.length(); i++)
		{
			newstring += str_in[i];
		}
		return newstring;
	}

	int count(string str_in, string str_search)
	{
		string checkstring, temp_string, newstring[100];
		int elestore = 0, break_count = 0, string_count = 0;

		for (char i : str_in)
		{
			temp_string += i;
			if (temp_string.find(" ") != string::npos)
			{
				newstring[elestore] = temp_string;
				elestore++;
				temp_string = "";
			}
			break_count++;
			if (break_count == str_in.length())
			{
				newstring[elestore] = temp_string;
				elestore++;
				temp_string = "";
			}
		}
		for (int i = 0; i < sizeof(newstring)/sizeof(newstring[0]); i++)
		{
			if (newstring[i].find(str_search) != string::npos)
			{
				string_count++;
			}
			else
			{
				continue;
			}
		}
		return string_count;
	}

	int len(int num_in)
	{
		string str_conv = to_string(num_in);
		int num_stored = str_conv.length();
		return num_stored;
	}

	int len(string str_in)
	{
		int str_len = str_in.length();
		return str_len;
	}

	int min(int * arr_in, int arr_length)
	{
		int stored_num = arr_in[0];
	
		for (int i = 0; i < arr_length; i++)
		{
			if (arr_in[i] < stored_num)
			{
				stored_num = arr_in[i];
			}
			else
			{
				continue;
			}
		}
		return stored_num;
	}

	int max(int* arr_in, int arr_length)
	{
		int stored_num = arr_in[0];

		for (int i = 0; i < arr_length; i++)
		{
			if (arr_in[i] > stored_num)
			{
				stored_num = arr_in[i];
			}
			else
			{
				continue;
			}
		}
		return stored_num;
	}

}