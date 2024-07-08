
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int _num;
	cin >> _num;

	int _idx = 1;
	int _answer = 0;

	int standartOneCnt = 0;
	string numBinary = bitset<32>(_num).to_string();
	string subNumBinary = numBinary.substr(numBinary.find('1'));

	for (int i = 0; i < subNumBinary.size(); i++)
	{
		if (subNumBinary[i] == '1')
			standartOneCnt++;
	}

	while (true)
	{
		int _next = _num + _idx;

		string _binary = bitset<32>(_next).to_string();
		string _subBinary = _binary.substr( _binary.find('1'));
		
		int nextOneCount = 0;
		for (int i = 0; i < _subBinary.size(); i++)
		{
			if (_subBinary[i] == '1')
				nextOneCount++;	
		}

		if (standartOneCnt == nextOneCount)
		{
			_answer = _next;
			break;
		}

		_idx++;
		
	}

	cout << "answer" << _answer << endl;
}