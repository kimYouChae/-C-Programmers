
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string str;
	cin >> str;

	stack<char> _sta;

	for (int i = 0; i < str.length(); i++) 
	{
		if (_sta.empty())
			_sta.push( str[i] );
		else 
		{
			// ��� ���� �ʰ�, �� ���� str[i]�� ������
			if (!_sta.empty() && _sta.top() == str[i] )
			{
				// �� ���� �����
				_sta.pop();
			}
			// ������� �ʰ�, �� ���� str[i]�� �ٸ���
			else if (!_sta.empty() && _sta.top() != str[i])
			{
				_sta.push(str[i]);
			}
		}
	}

	int answer = 0;
	// �����µ� stack�� ��������� -> 1
	if (_sta.empty())
		answer = 1;
	// �ƴϸ� 0
	else
		answer = 0;

	cout << answer;
}