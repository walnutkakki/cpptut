#include <iostream>
using namespace std;

class Rectangle{
    public:
    int width, height;
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int length);
    bool isSquare();
};

Rectangle::Rectangle(){
    width = height = 1;
}

Rectangle::Rectangle(int w, int h){
    w = width;
    h = height;
}

Rectangle::Rectangle(int length){
    width = height = length;
}

bool Rectangle::isSquare()
{
    if (width == height) return true;
    else return false;
}

int main(){
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(4);

    if(rect1.isSquare()) cout << "rect1은 정사각형입니다"<< endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형입니다"<< endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형입니다"<< endl;
    }