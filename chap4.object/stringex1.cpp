#include <iostream>
#include <string>
using namespace std;

//class 
int main()
{
    string s;
    cout << "마 더하기 빼기 곱하기 나누기 마음껏 해보거라" << endl;
    getline(cin, s, '\n');
    int sum = 0;
    int startIndex = 0;
    while(true)
    {
        int fIndex = s.find('+', startIndex);
        if(fIndex == -1)
        {
            string part = s.substr(startIndex);
            if(part == "") break;
            cout << part << endl;
            sum += stoi(part);
            break;
        }
        int count = fIndex - startIndex;
        string part = s.substr(startIndex, count);

        cout << part << endl;
        sum += stoi(part);
        startIndex = fIndex+1;
    }
    cout << "합은 " << sum << "이다" <<endl;
}