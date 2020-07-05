/*
Version: 0.5
Created by Angel Davila 7/5/2020
*/
#pragma once
#include <string>
using namespace std;

namespace pyincpp 
{
	string split(string str_in, string str_search, int element);
	string strip(string str_in);
	string replace(string replace_str, string element_1, string element_2);
	int sum(int *num_in, int element);
}