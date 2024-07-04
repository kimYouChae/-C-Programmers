// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    //12941
    
    vector<int> a;
    vector<int> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int answer = 0;
    for (int i = 0; i < a.size(); i++)
    {
        answer += a[i] + b[b.size() - 1 - i];
    }
    
}

