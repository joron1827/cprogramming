#include <iostream>
using namespace std;

int main()
{
    int a[4][4] = {10, 20, 30, 40, 5, 4 ,3, 99, 55, 100, 42, 100, 0, 105, 2, 11};
    int *q = &a[0][0];
    int temp =a[0][0];  // temp 임시 입력
    int secondMax = 0;  // secondMax 초기화

    // 배열 처음 값에 대입하여 최대값 찾기
    for (int i = 1; i < 16; i++){
        if(*q < *(q+i))
        {
            *q = *(q+i);
        }
    }
    
    // 두번째로 큰 수를 찾아 출력하기
    for (int i = 1; i < 16; i++){
        if(secondMax < *(q+i) && *(q+i) != *q)
        {
            secondMax = *(q+i);
        }
    }
    //  array의 첫번재 값에 두번째 큰 수가 입력 되었을 경우 교체
    if (secondMax < temp){
        secondMax = temp;
    }

    cout << "The largest number is "<< *q << endl;
    cout << "The second-largest number is " << secondMax << endl;

    return 0;

}
