#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

int main()
{
    // 70129 
    // for문돌리면 시간초과나려나 ?
    // algorithm의 count 사용

    string str;
    getline(cin, str);

    vector<int> answer;

    string temp = str;
    int wholeZero = 0;
    int progress = 0;
    while (true)
    {
        if (temp == "1")
            break;

        progress++;
        int zero = count(temp.begin(), temp.end(), '0');
        int remain = temp.length() - zero;

        wholeZero += zero;

        // remian을 2진수로 (int형 변수를 2진수로 / int는 4바이트 32비트)
        string binaryStr = bitset<32>(remain).to_string();

        // binaryStr은 0000... 처럼 0 부터 시작할 수 도 있으니 자르기
        // string 의 find (1의 위치 찾음) , 시작 1부터 끝까지 자르기 
        string substrBinary = binaryStr.substr(binaryStr.find('1'));

        temp = substrBinary;
    }


    answer.push_back(progress);
    answer.push_back(wholeZero);

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
}