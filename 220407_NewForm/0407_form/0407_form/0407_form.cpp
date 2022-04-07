#include <iostream>
#include <string>
using namespace std;

    /*
    <1. 연산자 만들기>
    연산자
    데이터를 가공(연산) 하는 모든 명령에 필요한것들
    1) 어떤 종류의 연산자들이 있는지?
    2) 우선 순위: 어떤 순서로 연산이 진행되는지?
    3) 결합 순서: 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

    1. 사칙연산 : 산술연산자(좌측부터 연산)
    + : 더하기
    - : 빼기
    * : 곱하기
    / : 나누기  11 / 3 => 3
    % : 나머지  11 % 3 => 2

    우선순위
    *, / , % > + , -
    */

    /*
    2. 대입연산자 (순서 우선순위: 우측부터 연산함)
    * = (같다 라는 의미(x) : 왼쪽 항에 오른쪽 항의 값을 대입한다(복사한다)
    * 
    * 3. 복합대입연산자 
        +=  a += b;     => a = a + b;
        -=  a -= b;     => a = a - b;
        *=  a *= b;     => a = a * b;
        /=  a /= b;     => a = a / b;
        %=  a %= b;     => a = a % b; (a와 b는 정수형 타입이어야 한다)

      4. 증감연산자 
      특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
      변수의 앞이나 뒤에 ++ 아니면 -- 를 붙여서 사용한다.

      5. 관계연산자 
      두 값을 비교한 결과가 참인지 거짓인지 반환하는 연산자 
      c++에서 거짓은 숫자 0일때false , 0이외의 나머지는 참 (1, true) 0만 거짓으로 판별하고 나머지 참(1아니고 -1도)

      < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.왼쪽항= 오른쪽항 (거짓), 왼쪽항 값 <오른쪽 값 (거짓)
      > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
      <= : 
      >= :
      == : 왼쪽 항의 값과 오른쪽 항의 값이 같을 때, 참을 반환한다.
      != : 왼쪽 항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.    
    */
    /*
        실습1.
        고객의 나이를 입력받아서 미성년자(19세 이하)이면 false를 출력
        성인이면 true를 출력 

        실습2.
        아까 입력 받은 나이를 기준으로, 주민등록증 발급대상이면 true를 아니면 false를 출력.
        20살만 해당 

        +실습
        입력받은 나이가 아홉수(1의 자리가 9일때)인지 확인해서 true, false를 출력.

    
    
    
    */
    

int main()
{
    int left_value = 11;
    int right_value = 5;
    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl;
    // run time error 발생 : /와 % 출력이 안된것 int right_value = 0;으로 했을때
    // f5하면 버그가 무엇인지 알려준다(문제발생 이유) > 디버깅 중지(shift +f5) 
    //>출력창 끄고 > 다시 ctrl+f5(출력)
    //cpp파일만 가지고 visual studio를 실행하기 어렵다(솔루션 있어야한다)

    int left_data= 11;
    int right_data = 5;
    left_data += right_data;
    cout << "+= : " << left_data << endl;
    
    left_data -= right_data;
    cout << "-= : " << left_data << endl;

    left_data *= right_data;
    cout << "*= : " << left_data << endl;

    left_data /= right_data;
    cout << "/= : " << left_data << endl;

    left_data %= right_data;
    cout << "%= : " << left_data << endl;

    cout << "%= : " << (left_data %= right_data) << endl; 
    //괄호를 치면 괄호안에서 값이 계산되어 출력된다 

    // a = b , a는 b와 같다가 아니라 a에 b의 값을 넣는다
    // 컴퓨터는 상위의 결과값을 받아서 출력을 한다는점 
    // (a += b 가 16이었고, a -= b 가 6이 아니고 11인 이유)
    // 처음의 값을 지정해서 출력하고 싶다면 재선언을 해줘야한다는것
    // 변수를 바꾸고싶기때문에 대입연산자를 사용하는것 
    // 내가 정해놓은 값을 바꾸고싶지않을때는 대입연산자를 사용(x)

    //예시(1)
    int left_value1 = 11;
    int right_value1 = 5;
    left_value1++; //값: 1증가하니까 12
    ++left_value1; //값: 앞에 ++해도 가능 12+1해서 13

    //예시 (2)
    int left_value2 = 11;
    int right_value2 = 5;
    cout << left_value2++ << endl; // ++의 위치에 따라 값이 달라진다 값: 출력 11 메모리 12
    cout << ++left_value2 << endl; // 메모리 13, 출력 13이 된다 그러니 코드를 어떻게 짜는지 중요함
    //예를 들어, 게임을 만들때 초당 hp가 떨어진다 하면 증감연산자를 이용해서 사용할수있다.
    //값이 바뀌는데는 조건이 필요한다. 그 조건을 확인하는 연산자-5번

    /*
    * 고객의 나이를 받는다
    * 미성년자 (19세 이하) 이면 true
    * 성인 (20세이상) 이면 false
    * 
    * 위의 입력 내용을 가져온다.
    * 주민등록대상자(20살이상) true
    * 20살 미만이면 false
    * 
    */
    /* <혼자했을때>
    int age;
    cout << "나이를 입력하세요" << endl;
    cin >> age;

    if (age <= 19 ) {
        cout << "false 미성년자 입니다" << endl;
    }
    else if (age > 19) {
        cout << "true 주민등록대상자 입니다" << endl;
    }*/
    
    // 같이 해보기 
    //변수명을 정하기
        /*int customer_age;
        cout << "고객의 나이를 입력하세요" << endl;
        cin >> customer_age;

        cout << boolalpha;
        cout << "고객님은 미성년자가" << (customer_age < 19) << "입니다" << endl;
        cout << "고객님은 주민등록발급대상" << (customer_age == 20) << "입니다" << endl;
        cout << "고객님은 아홉수" << (customer_age % 10 ==9) << "입니다" << endl;*/

    
      

    /* 혼자했을때 잘 안된점
    int age1;
    cin >> age1;
    cout << boolalpha << (age1 <= 19) << endl;
    cout << (age1 > 19) << endl;
    
    */
    
    int num;
    cout << "주민번호 뒷자리 첫숫자 입력하세요" << endl;
    cin >> num;
    cout << boolalpha;
    /*cout << "고객님은 여자" << (num % 2 == 0) << "입니다" << endl;
    cout << "고객님은 남자" << (num % 2 != 0) << "입니다" << endl;*/
    cout << "고객님은 여자인가?" << (num % 2 == 0) << endl;

    

    

    




    






}






