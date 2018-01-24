#include <iostream>
#include <string>
using namespace std;

int main()
{
    string d("abc");
    string e("abd");
    string f("abb");

    if(d<e)
    {
        cout << e <<" 는 " << d << " 보다 뒤에 나온다." << endl; 
    }
    else
        cout << "abc가 abd보다 뒤에 나오네? 그러니까 e 가 d보다 뒤에 나오네?"<<endl;
    
    if(d<f)
    {
        cout << f <<" 는 " << d << " 보다 뒤에 나온다." << endl; 
    }
    else
        cout << "abc가 abb보다 뒤에 나오네? 그러니까 d 가 f보다 뒤에 나오네?"<<endl;

    string g = e.substr(2);
    cout << g <<endl;
// -- a의 개수가 몇개인지 추려낼 수 있지 않을까?
    string h("aaabacadaeafag");
    cout << h.length() <<" 의 길이를 가지고 있군" << endl;
        for (int i = 0; i < h.length() ; i++)
        int index;
        int count;
            if (
                e.find("a") >0
            )
                count++;
            else if
            (
                e.find("a") <0
            )
                ;
        cout << count << endl;
}
//사전 순서로 이렇게 우선순위를 설정해놨구나
