// partial sum(부분합): 처음부터 특정 인덱스까지의 합을 의미 (0~b까지의 합)
// prefix sum(구간합): 수들의 나열에서 특정 구간의 합을 의미 (a~b인덱스 사이의 값들의 합을 구하는데 사용)

// prefix sum 알고리즘
// 구간합 알고리즘은 "현재 인덱스까지의 합을 저장하는 psum 배열"을 사용한다

// 인덱스 i~k의 합을 구해라 => psum[k] - psum[i-1]
// 연속된 k일의 온도의 합 => psum[i] - psum[i-k]

// (중요) 연속된 온도의 합이 "최대"가 되는 값을 구해라 => 구간합이 생각나야함

// 각종 문자열 변환
atoi(s.c_str()); // 문자열을 문자로 변환해서 숫자인지 문자인지 확인
stoi(s); // 문자열을 숫자로 변환
to_string(n); // 숫자를 문자열로 변환
string(문자길이, c); // 문자를 문자열로 변환

// 벡터 내에 해당 원소가 위치하는 인덱스 찾기
find(v.begin(), v.end(), 찾는 대상) - v.begin();

// 벡터의 i번째 요소 제거하는 법
v.erase(v.begin() + i);

// 배열 내 가장 큰/작은 원소찾는 법
int _min = *min_element(a, a + 9);
int _max = *max_element(v.begin(), v.end());

// 문자열 중간에 삽입하기
s.insert(2, "abc"); // 2번째 위치 삽입
s.insert(s.begin() + i, mid); // i번째 위치 삽입

// s.insert(idx, "abc");
// s.insert(2, "abc");

// 두가지 개념
// 1. (곱한 것을 어떤 변수에 집어넣는걸 기반으로) 반씩 나누면서 재귀함수를 구현
// 2. 모듈러 연산 개념 (값이 오버플로 나는 것을 막기 위해)

// +) 숫자가 너무 커지는 것을 방지하기 위해 모듈러 연산을 활용할 수 있다

// 모듈러 개념
// (a + b) % c = [(a % c) + (b % c)] % c
// x % n = (x % n) % n