// ConsoleApplication1.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include <stack>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    //�ñ� 12909
    
    string s;
    cin >> s;

    stack<char> stack;

    bool answer = true;
    for (int i = 0; i < s.length(); i++)
    {
        // 0. ��ȣ �����̸� ? -> ��Ƶα�
        if (s[i] == '(')
            stack.push('(');

        // 1. ��ȣ ���̸� ?
        else if (s[i] == ')')
        {
            // stack �˻��ؼ� �� ���� '('�� �ִ��� ?
            if (stack.top() == '(')
            {
                // stack���� ������
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

