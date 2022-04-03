#include <iostream>
#include <string.h>
using namespace std;

int add(int input1, int input2); 
double add(double input1, double input2); 
string add(string input1, string input2); 
int main()
{
    int i1 = 10, i2 = 30;
    double d1 = 0.5, d2 = 3.5;
    string s1 = "Hello", s2 = "World";

    cout << add(i1, i2) << ", "
         << add(d1, d2) << ", " 
         << add(s1, s2) << endl;
}

int add(int input1, int input2)
{
    return (input1 + input2);
}

double add(double input1, double input2)
{
    return (input1 + input2);
}

string add(string input1, string input2)
{
    input1 += input2;
    return input1;
}