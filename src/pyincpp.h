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
	string replace(string target, string search, string replace);
	string print(string str_in);
	string lower(string str_in);
	string upper(string str_in);
	string capitalize(string str_in);

	int sum(int *arr_in, int arr_size);
	int print(int num_in);
	int count(string str_in, string str_search);
	int len(int num_in);
	int len(string str_in);
	int min(int *arr_in, int arr_size);
	int max(int *arr_in, int arr_size);

	float print(float flt_in);

	bool print(bool bool_out);




}