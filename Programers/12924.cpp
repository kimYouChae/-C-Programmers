// Programmers.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int answer = 0;
    for (int i = 1; i <= num / 2; i++) 
    {
        int sum = 0;

        for (int j = i; j <= num / 2 + 1; j++) 
        {
            sum += j;

            if (sum == num)
            {
                answer++;
                break;
            }
            // 넘으면 -> 연속된 수로 표현 x
            if (sum >= num)
                break;
        }

    }

    // 정답은 본인까지, +1
    cout << answer + 1; 
}

