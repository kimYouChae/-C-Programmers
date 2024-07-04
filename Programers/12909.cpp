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
    //플그 12909
    
    string s;
    cin >> s;

    stack<char> stack;

    bool answer = true;
    for (int i = 0; i < s.length(); i++)
    {
        // 0. 괄호 시작이면 ? -> 담아두기
        if (s[i] == '(')
            stack.push('(');

        // 1. 괄호 끝이면 ?
        else if (s[i] == ')')
        {
            // stack 검사해서 맨 위에 '('가 있는지 ?
            if (stack.top() == '(')
            {
                // stack에서 꺼내기
                stack.pop();
            }
            else
            {
                answer = false;
                break;
            }
        }
    }

    if (stack.size() != 0)
        answer = false;


    cout << answer;
    

}

