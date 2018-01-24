#include <iostream>
using namespace std;

class Sample {
    int a;
public:
    Sample() { a = 100 ; cout << a << ' ' ;}
    Sample(int x) {a =x; cout << a << ' ';}
    Sample(int x, int y) { a = x*y ; cout << a << ' ';}
    int get(){return a;}
};

int main()
{
//    Sample arr[3];
    Sample arr2D[2][2] = {{Sample(2,3), Sample(2,4)}, {Sample(5), Sample()}};  
    int b;
    b = Sample arr2D[0][0] + Sample arr2D[0][1] + Sample arr2D[1][0] + Sample arr2D[1][1]);
} 