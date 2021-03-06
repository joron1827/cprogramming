#include <iostream>
using namespace std;


struct CDAccountV1
{
    double balance;
    double interestRate;
    int term;
};

void swap(CDAccountV1& accountV1, CDAccountV1& accountV2);

int main(){

    struct CDAccountV1 v1 = {10.0, 0.01, 60};
    struct CDAccountV1 v2 = {50.0, 0.02, 30};

    swap(v1,v2);
    cout << "balance: " << v1.balance 
        << " interest: " << v1.interestRate 
        << " terms: " << v1.term << endl;

    cout << "balance: " << v2.balance
        << " interest: " << v2.interestRate 
        <<" terms: " << v2.term << endl;

    return 0;

}

void swap(CDAccountV1& accountV1, CDAccountV1& accountV2){
    struct CDAccountV1 temp = accountV1;
    accountV1 = accountV2;
    accountV2 = temp;
}