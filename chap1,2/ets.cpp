#include <iostream>
#include <stdlib.h>

//임의로 숫자를 생성해서 가져옵시다. 할 때 마다 새로 받아올 수 있게 할 수 없을까? -- srand time null을 주면 되는데 왜일까?
//srand로 seed 값을 임의로 정해줄 수 있는데, time은 항상 바뀌니까 항상 임의로 지정할 수 있게 되는거다
//seed는 rand를 생성하는 값이구나,

using namespace std;

int main()
{
    srand(time(NULL));
    int A;
    int B;
    A = (rand()%10+1);
    B = (rand()%10+1);
    cout << A <<endl << B << endl << A+B << endl;
} 