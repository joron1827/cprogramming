#include <iostream>
using namespace std;

void sort_three (int& a, int& b, int& c);

int main ()
{
    int i1 = 100, i2 = 90, i3 = 500;
    sort_three (i1, i2, i3);
    cout << "Three numbers are: " 
        << i1 << " , " << i2 << " , " << i3 << endl;
}

void sort_three (int& a, int& b, int& c)
{
    if(a < b)
    {
        int temp = a;
        a = b;
        b = temp;
        return sort_three (a, b, c);
    }
    if (b < c)
    {
        int temp = b;
        b = c;
        c = temp;
        return sort_three (a, b, c);
    }
}