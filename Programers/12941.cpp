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

