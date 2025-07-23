# iot-cpp2-2025

## 1일차 - 함수의 정의, 호출, 선언

### 함수란?
- 특정 작업을 수행하는 코드블록
- `재사용성`과 `가독성` 향상을 위해 사용된다.

### 함수의 구조
- 선언 : 함수가 존재함을 미리 알림(헤더)
    - 'void func();'
- 정의 : 함수의 실제 동작을 작성
    - 'void func() {...}'
- 호출 : 함수를 실행함 
    - func();

### 함수의 형태별 분류
|형태|입력|출력|예시|
|------|-------|------|-------|
|타입 함수명()|x|x|'void func()'|
|타입 함수명(매개변수)|o|x|'void func1(char)'|
|타입 함수명(매개변수)|o|o|'int func2(int)'|

- int : 함수가 정수형 값을 반환한다.
- void : 반환(return) 값이 없다.

### 매개변수와 인자
- 매개변수(Parameter) : 한수 정의 시 사용하는 변수
- 인자(Argument) : 함수 호출 시 전달하는 값
```cpp
    void func(char c)   // 매개변수 c
    func1('a')          // 인자 'a'
```

### 반환값(Return)
- `return` 키워드를 사용하여 함수 실행 결과를 반환함
- void 함수는 반환값이 없음
```cpp
    int func2(int n){
        return n + 1;   // n+1 반환
    }
```

### main 함수
- 모든 c++ 프로그램의 시작점
- 인자 전달 : int main(int argc, char** argv)
    - argc : 전달된 인자의 개수
    - argv : 문자열 포인터 배열(실행 인자)

#### 기본예제
```cpp
    #include <stdio.h>

    void func();			// 함수선언

    int main()
    {
        func();				// 함수호출
        
        return 0;

    }
    void func()				// 함수 정의. 함수머리: 출력 함수이름(입력)
    {
        printf("Hello\n");
    }
```

## 2일차 - 메모리 구조와 포인터, 참조자

### 메모리 구조
|구역|특징|
|------------|------|
|`Code Segment`|함수 코드가 저장됨 (함수 이름은 곧 주소), 함수 하나당 한 개 할당|
|`Data Segment`|전역 변수, static 변수, 문자열 리터럴 등|
|`Stack`|지역 변수, 매개 변수 저장(자동 할당/해제)|
|`Heap`|사용자가 직접 동적 할당('new', 'malloc')|

### 함수도 메모리 주소를 가진다.
```cpp
    void func() {
        printf("%p\n", func);       // 함수의 이름 = 주소 = 배열
    }
```

### 포인터 (Pointer)
```cpp
    void change_val(int* p) {
        *p = 20;
    }
```
- `*` : 포인터가 가리키는 **메모리 주소** 값을 의미(역참조)
- `&` : 변수의 주소를 가져옴
- 포인터는 변수 주소를 전달하여, 함수 내에서 값을 직접 수정 가능

### 참조자 (Reference)
```cpp
    void change_val(int& p) {
        p = 20;
    }
```
- `&` 뒤에 붙은 건 참조자 선언(포인터와는 다름)
- 참조자는 해당 변수를 별명처럼 직접 접근할 수 있게 함
- 포인터보다 사용이 간단하고 안전함

### lvalue, rvalue
```cpp
    int n = 10;
    int& rn = n;    // rn은 n의 별칭

    n = 20;         // ok
    10 = n;         // x -> rvalue는 좌변에 올 수 없음
```
- lvalue : 메모리 주소를 가지는 것(변수)
- rvalue : 일시적 값, 리터럴 등

## 3일차 - 참조자 고급, 클래스, 템플릿

### 포인터 vs 참조자  
|구분|포인터(Pointer)|참조자(Reference)|
|------|------|------|
|선언|int* p = &n|int& ref = n;|
|NULL|가능 (int* p = nullptr;)|불가능(초기화 반드시 필요)|
|사용시|*p, p-> |변수처럼 사용(ref)|
|변경 가능|참조 대상 변경 가능|참조 대상 변경 불가|

### 참조 매개변수와 함수
- 값 변경 함수
```cpp
    void func(int& arg) {   // 매개변수 int에 대한 참조 (참조 안하면 1 출력됨)
        arg += 100;     // 호출한 쪽 변수 자체가 변경됨
    }
```
- 참조자 기반 swap 함수
```cpp
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
```

### r-value 참조
```cpp
    //int& ref = a + b;     // l-value 참조는 임시값(r-value)을 받을 수 없음
    const int& ref = a + b; // const int&는 r-value도 받을 수 있다.(상수를 참조, 임시 값을 const로 고정해서 안전하게 쓸 수 있기 때문)
    int&& ref = a + b;      // 임시 값을 참조하려면 && 사용
```

### 함수 반환값 참조
- 위험 예시
```cpp
    int& func() {
        int val = 10;
        return val;     // 지역 변수는 함수 종료 후 사라짐
    }
```
    - 함수에서 참조를 반환할 경우 반환 대상의 수명을 주의 해야한다.

### Class
- `this->` : 멤버 변수와 매개변수 구분

- strcpy()
    - 문자열을 복사할 때 사용하는 함수(소스 문자열을 대상 배열에 그대로 복사)
    - 문자열 배열에는 = 연산자 사용 불가 -> `strcpy()` 필요

### 함수의 다형성 (오버로딩 vs 템플릿)

#### 함수 오버로딩
- 같은 이름의 함수를 매개변수의 타입 또는 개수만 다르게 해서 여러 개 정의하는 것 -> 서로다른 인자를 받는 함수를 만들 수 있다.

```cpp
    #include <iostream>
    using namespace std;

    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }

    int main() {
        cout << add(3, 4) << endl;      // int 버전 호출
        cout << add(3.5, 4.2) << endl;  // double 버전 호출
        return 0;
    }
```
- 오버로딩 조건
    - 함수 이름은 같아도 매개변수 목록이 달라야 한다.

- 오버로딩을 쓰는 이유
    - 가독성 향상
    - 다양한 타입/개수를 받아 처리 가능
    - 템플릿 함수로 확장 가능

#### 함수 템플릿
- 자료형에 의존하지 않고 재사용 가능한 함수를 만들기 위한 기능
- 같은 로직을 여러 `자료형(int, double, float, etc)`에 대해 `하나의 템플릿 함수로 여러 타입을 자동 처리`할 수 있다.

- 일반 함수 vs 템플릿
    - 일반 함수 : 자료형마다 따로 작성해야함
    ```cpp
        int add(int a, int b) {
            return a + b;
        }

        double add(double a, double b) {
            return a + b;
        }
    ```
    - 템플릿 함수 : 한번에 처리 가능
    ```cpp
        template <typename T>
        T add(T a, T b) {
            return a + b;
        }
    ```
- 예제
```cpp
    #include <iostream>
    using namespace std;

    template <typename T>
    T add(T a, T b) {
        return a + b;
    }

    int main() {
        cout << add(3, 4) << endl;      // int형으로 동작
        cout << add(3.5, 4.2) << endl;  // double형으로 동작
        return 0;
    }
```

## 4일차 - 클래스 초기화, static, inline, new/delete

### 클래스 멤버 초기화 방법

1. 생성자 내부에서 초기화
```cpp
    MyClass(int _a) {
        a = _a;
    }
```
2. 초기화 리스트 사용
```cpp
    MyClass(int _a) : a(_a) {}
```
- 성능이 더 좋고 const/static/reference 멤버 초기화에 필수적

3. 인클래스 초기화
```cpp
    class MyClass {
        int x = 10; // 선언 시 초기화
    };
- 간단한 기본값을 줄 때 유용
- 생성자에서 별도로 초기화하지 않으면 이 값 사용됨
```

4. static 멤버 초기화
```cpp
    class MyClass {
        static int count;   // 선언만 가능
    };
    int MyClass::count = 0; // 클래스 외부에서 초기화
```
- static 멤버는 클래스 전체에서 공유됨
- 반드시 클래스 외부에서 한 번 초기화 해야함

5. const 멤버 초기화
```cpp
    class MyClass {
        const int id;
    public:
        MyClass(int _id) : id(_id) {}   // 초기화 리스트만 가능
    }
```
- const 멤버는 반드시 초기화 리스트를 통해서만 초기화 가능
- 생성자 내부 대입은 안됨

### this 포인터
- 클래스 내부에서 자기 자신의 객체 주소를 가리키는 포인터
- 매개변수 이름과 멤버 변수가 같을 때 구분에 사용
```cpp
    this -> id = id;    // 멤버 변수 ← 매개변수
```

### static 멤버
- 클래스 전체에서 공유되는 멤버(객체와 무관하게 존재)
- 객체 없이도 접근 가능
- static 함수에서는 일반 멤버 변수 접근 불가
```cpp
    class MyClass {
        static int count;
        static void func() {
            count = 1;  // ok
            //a = 2;    // 일반 멤버는 접근 불가
        }
    };
```

### inline 함수
- 짧고 자주 호출되는 함수를 인라인으로 선언하면, 함수 호출 오버헤드 없이 코드가 복붙(inlined)됨
```cpp
    inline int func(int x) {
        return x + x;
    }
```
- 매크로 vs inline 차이
```cpp
    #define add(x) x + x                    // 괄호 부족 시 오류 발생 가능
    inline int add(int x) { return x + x; } // 타입 안전하고 안정적
```

### 동적 메모리 할당 (new / delete)
```cpp
    int* p = new int;       // int 1개 할당
    int* arr = new int[10]; // int 배열 동적 할당

    delete p;               // 단일 변수 해제
    delete[] arr;           // 배열 해제
```
- 프로그램 실행 중에 필요한 만큼 메모리를 직접 요청해서 사용하는 것 -> 런타임에 메모리 크기를 정해야 할 때 사용
- delete 와 delete[] 는 반드시 쌍으로 맞춰야 함

|연산자|의미|예시|
|------|------|------|
|new|메모리 할당|new int, new int[5]|
|delete|단일 변수 해제|delete p;|
|delete[]|배열 해제|delete[] arr;|

#### 주의할 점
- delete 안하고 종료 : 메모리 누수 발생(heap에 낭비됨)
- delete 두 번 : Double free 오류 발생 가능
- delete 없이 계속 new : 점점 메모리 쌓임 -> 메모리 폭발


## 5일차 - 생성자(Constructor)

### 생성자
- 객체가 생성될 때 자동으로 호출되는 특수한 함수
- 이름은 클래스명과 같고, 반환형이 없음(void도 쓰면 안 됨)
- 객체의 초기화 작업을 담당함

#### 기본 생성자[Person();] 
- 매개변수가 없는 생성자, 객체를 아무 초기값 없이 만들 때 사용
```cpp
    class Person {
    public:
        Person() {
            cout << "기본 생성자 호출" << endl;
        }
    };

    Person p1;  // 기본 생성자 호출됨
```
#### 복사 생성자[const Person& other] 
- 이미 생성된 객체를 다른 객체로 복사할 때 호출되는 생성자, 인자로 같은 클래스의 객체를 참조로 받음
```cpp
    Person p1("홍길동", 30);
    Person p2(p1);      // 복사 생성자 호출
    Person p3 = p1;     // 이 경우도 복사 생성자 호출
```
##### Deep copy(깊은 복사) 
- 객체 안에 포인터 멤버가 있을 때, 그 포인터가 가리키는 실제 데이터까지 "새로운 메모리"에 복사하는 것
- 필요한 이유
    - 기본 복사(얕은 복사)는 그냥 포인터 주소만 복사해서, 두 객체가 같은 메모리를 공유하게 됨 -> 문제가 생긴다.
- 예제
```cpp
    class Person {
        char* name;
    public:
        Person(const char* n) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }
        // 깊은 복사 생성자
        Person(const Person& other) {
            name = new char[strlen(other.name) + 1];
            strcpy(name, other.name);
        }

        ~Person() {
            delete[] name;
        }
    };
```

##### 변환 생성자
- 다른 타입의 값을 클래스 객체로 자동 변환할 수 있게 해주는 생성자
- 클래스가 아닌 int, double, string 같은 값 하나를 클래스 객체로 변환하고 싶을 때 자동으로 호출된다.
- 예제
```cpp
    #include <iostream>
    using namespace std;

    class Person {
        int age;
    public:
        Person(int a) {
            age = a;
            cout << "변환 생성자 호출!" << endl;
        }

        void show() {
            cout << "age: " << age << endl;
        }
    };

    int main() {
        Person p = 25;  // int -> Person 으로 변환됨
        p.show();       // 출력: age: 25
        return 0;
    }
```

##### 이동 생성자
- 임시 객체(r-value)의 자원을 복사하지 않고 빼앗는(move) 생성자
- 기본 문법 : ClassName(ClassName&& other);
- 예제
```cpp
    #include <iostream>
    #include <cstring>
    using namespace std;

    class Person {
        char* name;
    public:
        // 일반 생성자
        Person(const char* n) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            cout << "일반 생성자 호출" << endl;
        }

        // 이동 생성자
        Person(Person&& other) {
            name = other.name;      // 주소만 빼앗음
            other.name = nullptr;   // 원본은 빈 상태로
            cout << "이동 생성자 호출" << endl;
        }

        ~Person() {
            delete[] name;
        }

        void show() {
            cout << "name: " << (name ? name : "null") << endl;
        }
    };

    int main() {
        Person p1("홍길동");
        Person p2 = std::move(p1)   // 이동 생성자 호출됨

        p2.show();                  // name: 홍길동
        p1.show();                  // name: null

        return 0;
    }


