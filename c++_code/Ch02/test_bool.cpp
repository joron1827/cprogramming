#include <iostream>
using namespace std;

int main() {
    bool isDog = true;
		int x = 2;
		bool result;

		
		// bool data type 으로 선언된 변수인 isDog을 출력하면 0 또는
		// 1로 나옴
    cout << "is dog? : " << isDog << endl;
		
		// bool data type으로 선언된 변수인 isDog의 출력값을 true,false
		// 로 출력하고 싶은 경우는
		// boolalpha(std에 선언) 를 사용
		cout << boolalpha;
		cout << "2nd is dog? :" << isDog << endl;

		// 코딩할 때 ()를 사용하지 않은 것을 추천하지 않음.
		// 연산 우선순위를 외우기가 쉽지 않기 때문에
		// 앞의 연산 결과가 FALSE , 그리고 or 연산이므로 뒤 의 연산 결과
		// 에 상관 없이 False 값이 나온다.
		result = x + 1 > 2 || x + 1 < -3;
		result = ((x + 1) > 2) || ((x + 1) < -3);
		cout << "result : " << result << endl;
	
		
    return 0;

}