// Aggressive Cows 
// A Farmer has built a new long barn, with N (2 <= N <= 105) stalls. 
// The stalls are located along a straight line at positions x1…xN (0 <= xi <= 109).
//  His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall.  
// To prevent the cows from hurting each other, the farmer wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible.  
// What is the largest minimum distance? 
// Example 
// Input : C=3, N=5 [1, 2, 4, 8, 9] 
// Output : 3  

#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

bool canPlaceCows(int c, int n, int* pos, int m) {

	// check if you can place 'c' cows in 'n' stalls at a dist. of >= m

	// place the 1st cow in the 1st stall

	int numCowPlaced = 1;
	int prevCowPos = pos[0];

	// try to place the remaining cows at a dist of >= m

	for (int i = 1; i < n; i++) {

		// can I place the next cow in the ith stall

		if (pos[i] - prevCowPos >= m) {

			// you can place the next cow in the ith stall

			numCowPlaced++;
			prevCowPos = pos[i];

			if (numCowPlaced == c) {
				return true;
			}

		}

	}

	return false;

}

// time : O(n.logn)

int largestMinDist(int n, int c, int* pos) {

	int s = INT_MAX; // for the tightest lower-bound, place the two cows in stalls closest to each other
	int e = pos[n - 1] - pos[0]; // for the tightest upper-bound, place the two cows at the extreme positions
	for (int i = 1; i < n; i++) {
		if (pos[i] - pos[i - 1] < s) {
			s = pos[i] - pos[i - 1];
		}
	}

	int ans;

	while (s <= e) {
		int m = s + (e - s) / 2;

		// can you place 'c' cows in 'n' stalls such that
		// the minimum distance b/w them is at-least 'm'?

		if (canPlaceCows(c, n, pos, m)) {
			// you can place 'c' cows in 'n' stalls
			ans = m;
			// since we want to find the largest minimum distance b/w
			// the cows, continue your search towards the right of 'm'
			// i.e. search space reduces from [s, e] to [m+1, e].
			s = m + 1;
		} else {
			// you cannot place 'c' cows in 'n' stalls at a minimum distance
			// of 'm' therefore continue your search towards the left of 'm'
			// i.e. search space reduces from [s, e] to [s, m-1].
			e = m - 1;
		}

	}

	return ans;

}

int main() {

	int t;
	cin >> t;

	int n, c;
	int* pos = new int[n];

	while (t--) {
		cin >> n >> c;
		for (int i = 0; i < n; i++) {
			cin >> pos[i];
		}
		sort(pos, pos + n); // we sort cuz our canPLACECOWS require sorted position array
		cout << largestMinDist(n, c, pos) << endl;
	}

	// int n = 5;
	// int c = 3;
	// int pos[] = {1, 2, 4, 8, 9};
	// cout << largestMinDist(n, c, pos) << endl;

	return 0;
}