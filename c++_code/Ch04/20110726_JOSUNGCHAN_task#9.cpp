#include <iostream>
using namespace std;

int iAdd(int input1, int input2);
int iSub(int input1, int input2);
int iMul(int input1, int input2);
double iDiv(double input1, double input2);

int main()
{
    int a = 20, b = 10;
    cout << "Add: " << iAdd(a,b) << endl;
    cout << "Sub: " << iSub(a,b) << endl;
    cout << "Mul: " << iMul(a,b) << endl;
    cout << "Div: " << iDiv(a,b) << endl;
    return 0;
}


int iAdd(int input1, int input2)
{
    return input1 + input2;
}
int iSub(int input1, int input2)
{
    return input1 - input2;
}
int iMul(int input1, int input2)
{
    return input1 * input2;
}
double iDiv(double input1, double input2)
{
    return input1 / input2;
}