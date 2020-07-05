#include "pyincpp.h"
#include <iostream>
using namespace std;

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

	
}