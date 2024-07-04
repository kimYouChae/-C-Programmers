#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>
#include <bitset>

int main()
{
    // 70129 
    // for�������� �ð��ʰ������� ?
    // algorithm�� count ���

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

        // remian�� 2������ (int�� ������ 2������ / int�� 4����Ʈ 32��Ʈ)
        string binaryStr = bitset<32>(remain).to_string();

        // binaryStr�� 0000... ó�� 0 ���� ������ �� �� ������ �ڸ���
        // string �� find (1�� ��ġ ã��) , ���� 1���� ������ �ڸ��� 
        string substrBinary = binaryStr.substr(binaryStr.find('1'));

        temp = substrBinary;
    }


    answer.push_back(progress);
    answer.push_back(wholeZero);

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
}