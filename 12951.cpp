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
        // 공백이면 ?
        if (str[i] == ' ')
        {
            // temp가 비어있을 때
            if (temp.empty())
            {
                answer += " ";
                continue;
            }

            // temp가 안 비어있을 때
            else
            {
                answer += toupper(temp[0]);
                for (int j = 1; j < temp.size(); j++)
                    answer += tolower(temp[j]);
                answer += " ";
            }
        }
    }

    // 끝났는데 temp가 안비어있으면 ? -> 마지막이 문자열로 이루어져있으면
    if (!temp.empty())
    {
        answer += toupper(temp[0]);
        for (int j = 1; j < temp.size(); j++)
            answer += tolower(temp[j]);
        answer += " ";
    }
    
}