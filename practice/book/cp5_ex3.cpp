#include <iostream>
using namespace std;

void square(int n)  //&을 주지 않았을 때, 그러니까 참조 호출을 하지 않았을 때는 square 내에서만 결과가 바뀌고 다시 square가 끝나면 처음 변수로 돌아가버린다. 그러니까 주의하자.
{
    n = n*n;
    cout << n << endl;
}

int main()
{
    int m =5;
    square(m);
    cout << m << endl;
}