# py-in-cpp
Py-in-cpp is a collection of C++ functions that are built to simulate the behavior of some of Python's functionality without the use of its interpreter.

# Table of Contents
- [Split()](#split)
- [Strip()](#Strip)
- [Replace()](#replace)
- [Sum()](#sum)
 
# Split()
This is the C++ version of Pythons split function! You can take a target string and split it into a list.
 
 ```cpp
split(string str_in, string str_search, int element)
```
* str_in - The string you would like to split.
* str_search - Where you would like to split the string.
* element - Which element you would like to return.

#### Example

```cpp
string str_1 = "Angel Davila";
cout << pyincpp::split(str_1, " ", 1) << endl;

string str_2 = "There are seven words in this sentence.";
cout << pyincpp::split(str_2, " ", 2) << endl;

string str_3 = "marley-EE#7068";
cout << pyincpp::split(str_3, "#", 0) << endl;
```
#### Output

![](app/split_output.PNG)

# Strip()
Python has this cool strip function that allows you to get rid of spacing in a string, now you can do it in C++.

```cpp 
strip(string str_in)
```
* str_in - The string you would like to strip of white space.

*Note: currently takes away all white space, including spaces in the middle of a string. Working to mimic Python's actual function.

#### Example

```cpp
int main()
{
    string str_1 = "  Spaces will strip away   ";
    cout << pyincpp::strip(str_1) << "Finish" << endl;
    
    string str_2 = "1 2 3 4 5 6";
    cout << pyincpp::strip(str_2) << endl;
    
    string str_3 = "1.              Angel_Davila";
    cout << pyincpp::strip(str_3) << endl;
}
```
#### Output

![](app/strip_output.PNG)

# Replace()
Like Python's replace function, use can take a target string, locate an element and replace it with another.
```cpp 
replace(string replace_str, string element_1, string element_2)
```
* replace_str - The target string you would like to modify.
* element_1 - The character or word you would like to replace in your string.
* element_2 - The new character or word you would like to use to replace.

#### Example

```cpp
string str_1 = "His name is Angel he likes C++ and Python";
cout << pyincpp::replace(str_1, "Angel", "Ben") << endl;

string str_2 = "Replace all the ooooooooooooooooo's";
cout << pyincpp::replace(str_2, "o", "G") << endl;

string str_3 = "You can replace single letters or whole words anywhere!";
cout << pyincpp::replace(str_3, "You", "Anyone") << endl;
```
#### Output

![](app/replace_output.PNG)

# Sum()
Summate all integers in your array at ease!
```cpp 
sum(int *num_in, int element)
```
* num_in - The target array you would like to summate.
* element - The number of elements in your array.

#### Example

```cpp
int num_1[] = {1, 2, 3, 4, 5, 6};
cout << pyincpp::sum(num_1, 6) << endl;

int num_2[] = {12, 44, 2};
cout << pyincpp::sum(num_2, 3) << endl;

int num_3[] = {5, 5, 5, 5, 5};
cout << pyincpp::sum(num_3, 5) << endl;
```
#### Output

![](app/sum_output.PNG)



