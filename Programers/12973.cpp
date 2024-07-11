
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
			// 비어 있지 않고, 맨 위랑 str[i]랑 같으면
			if (!_sta.empty() && _sta.top() == str[i] )
			{
				// 맨 위에 지우기
				_sta.pop();
			}
			// 비어있지 않고, 맨 위랑 str[i]랑 다르면
			else if (!_sta.empty() && _sta.top() != str[i])
			{
				_sta.push(str[i]);
			}
		}
	}

	int answer = 0;
	// 끝났는데 stack이 비어있으면 -> 1
	if (_sta.empty())
		answer = 1;
	// 아니면 0
	else
		answer = 0;

	cout << answer;
}