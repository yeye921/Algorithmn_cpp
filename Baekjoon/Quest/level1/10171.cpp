// 백슬래시 자체를 그냥 출력하려고 하면 오류남! (백슬래시 뒤에 문자를 조합함으로써 특정 기능을 수행하는 문자이기 때문)
// 백슬래시 문자 자체도 출력하기 위해 \를 붙여줘야 한다 (즉, \ 2개)
// ""와 같이 문자열을 의미하도록 묶어주는 것들도 큰따옴표 자체를 출력하기 위해서 백슬래시와 조합하여 출력함 (\")
// 즉, 일반적으로 특정 기능을 요하는 문자들을 출력하려면 대부분 백슬래시(\)+ 문자를 조합하면 된다!
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "\\    /\\\n";
    cout << " )  ( ')\n";
    cout << "(  /  )\n";
    cout << " \\(__)|\n";
}