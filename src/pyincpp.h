/*
Version: 0.5
Created by Angel Davila 7/5/2020
*/
#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace pyincpp 
{
	string split(string str_in, string str_search, int element);
	string strip(string str_in);
	string replace(string replace_str, string element_1, string element_2);
	int sum(int* num_in, int element);
	int print(int int_out);
	string print(string str_out);
	float print(float flt_out);
	bool print(bool bool_out);
	string lower(string str_in);
	string upper(string str_in);
	string capitalize(string str_in);
}