#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

int main()
{
    // 12951
    
    string str;
    getline(cin, str);

    string answer = "";
    string temp = "";
    for(int i = 0; i <str.length(); i++)
    {
        // �����̸� ?
        if (str[i] == ' ')
        {
            // temp�� ������� ��
            if (temp.empty())
            {
                answer += " ";
                continue;
            }

            // temp�� �� ������� ��
            else
            {
                answer += toupper(temp[0]);
                for (int j = 1; j < temp.size(); j++)
                    answer += tolower(temp[j]);
                answer += " ";
            }
        }
    }

    // �����µ� temp�� �Ⱥ�������� ? -> �������� ���ڿ��� �̷����������
    if (!temp.empty())
    {
        answer += toupper(temp[0]);
        for (int j = 1; j < temp.size(); j++)
            answer += tolower(temp[j]);
        answer += " ";
    }
    
}