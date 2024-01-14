#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>, greater<int> > m;
    m.push(4);
	m.push(3);
	m.push(2);
	m.push(6);
	// m.push(4);
	// m.push(6);
	// m.push(3);
	// m.push(2);
	// m.push(1);

	cout << m.size() << endl;

	while (!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}