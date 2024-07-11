
#include <iostream>
#include <bitset>

using namespace std;

long dp[100001];

int test(int num)
{
	if (num == 0)
		return dp[0];

	if (dp[num] != 0)
		return dp[num];

	else
		return dp[num] = test(num - 1) + test(num - 2);
}

int main()
{
	int n;
	cin >> n;

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i < n + 1; i++) 
	{
		dp[i] = (dp[i - 1] % 1234567) + (dp[i - 2] % 1234567 ) % 1234567;
	}

	cout << dp[n];

	// 재귀 :  시간초과
	// dp : dp를 사용한 재귀 : 시간초과 
	// for문 + dp : 오류남 왜지 ??
	// -> 문제에서 1234567로 나누라 되어있음 , 각 연산마다 다 나눠줘야함 
	
}
