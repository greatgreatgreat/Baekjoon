
#pragma warning (disable : 4996)
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n, dp[1000010];
int inf = 1000100;
void search(int x) {
	if (x % 3 == 0 && x % 2 == 0) dp[x] = min(dp[x / 3], min(dp[x/2], dp[x-1])) + 1;
	else if (x % 3 != 0 && x % 2 == 0) dp[x] = min(dp[x / 2], dp[x-1]) + 1;
	else if (x % 3 == 0 && x % 2 != 0) dp[x] = min(dp[x / 3], dp[x-1]) + 1;
	else dp[x] = dp[x - 1] + 1;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	dp[0] = 0; dp[1] = 0; dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		search(i);
	}
	printf("%d\n", dp[n]);

	return 0;
}
