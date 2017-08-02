#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
#include <bitset>
#include <set>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
#include <functional>
#include <locale>
#include <cmath>
#include <math.h>

using namespace std;

#define ll  long long
#define ld long double
#define oo  10000000
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define _CRT_SECURE_NO_WARNINGS

struct Point
{
	ld x, y;
};
Point points[100005];
ld result = oo;
bool check(Point right, Point left)
{
	return ((left.x >right.x) || (left.x == right.x && left.y>right.y));
}
ld distance(Point p1, Point p2)
{
	return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

void closestPair(int l, int r)
{
	if (l >= r)  return;
	int mid = (l + r) / 2;
	closestPair(l, mid);
	closestPair(mid + 1, r);

	for (int i = mid; i >= l && points[mid].x - points[i].x < result; i--)
		for (int j = mid + 1; j <= r && points[j].x - points[i].x < result; j++)
			result = min(result, max(points[j].x - points[i].x, abs(points[j].y - points[i].y)));
}
int main()
{
	int n, i;
	while (cin >> n)
	{
		result = oo;
		for (i = 0; i < n; i++)
			cin >> points[i].x >> points[i].y;
		sort(points, points + n, check);
		closestPair(0, n - 1);
		cout << result << endl;
	}
	return 0;
}