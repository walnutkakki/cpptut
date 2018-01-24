#include <iostream>
#include <string>

using namespace std;

class Rect 
{
    int width, height;
public:
    Rect(int w, int h)
    {
        width = w;
        height = h;
    }
    Rect() {width = 1; height =1;}
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea();
};

int Rect::getArea()
{
    return width*height;
}

 /* //1번, Rect 객체를 다루자
int main()
{
    Rect r(2,3);
    Rect* p;    //포인터 변수 지정
    p = &r;     //주소 할당
    cout << p-> getHeight() << " 높이 이고, " << (*p).getWidth() << " 폭 입니다." << endl;  // 주소 받은 포인터로 데이터 출력
}
*/

/* //2번, 객체 생성하고 면적 구해보자
int main()
{
    Rect *q;        //포인터 변수 지정
    int w, h;
    cin >> w >> h;  // 계산에 쓸 변수 입력
    q = new Rect(w, h); // Rect 객체를 동적 생성하자
    cout << "면적은 " << q->getArea() << endl; //출력
    delete q;   //데이터 누수 방지
}
*/
/*  5번, 각각 배열 넓이 구하기
int main()
{
    Rect r[5]= {Rect(), Rect(2,3), Rect(3,4), Rect(4,5), Rect(5, 6)};
    for(int i = 0 ; i < 5 ; i++)
        cout << i <<"번째 사각형의 넓이는 " << r[i].getArea() << endl;

}
*/
