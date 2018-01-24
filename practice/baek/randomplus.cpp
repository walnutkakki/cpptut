#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int A;
    int B;
    A = (rand()%10+1);
    B = (rand()%10+1);
    cout << A <<endl << B << endl << A+B <<endl;
}