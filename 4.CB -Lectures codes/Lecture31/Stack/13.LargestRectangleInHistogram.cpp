#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int h[] = {4,2,4,3,4,3,4,0};
	int n = sizeof(h) / sizeof(int);

	vector<int> v1 = f1(h, n); // indices of nearest smaller to the left
	vector<int> v2 = f2(h, n); // indices of nearest smaller to the right

	int maxSoFar = 0;

	for (int i = 0; i < n; i++) {

		int bestWidth = v2[i] - v1[i] - 1;
		int bestArea = h[i] * bestWidth;
		maxSoFar = max(maxSoFar, bestArea);

	}

	cout << maxSoFar << endl;

	return 0;
}