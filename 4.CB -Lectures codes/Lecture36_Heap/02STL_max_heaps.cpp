#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> m;

    m.push(1);
	m.push(3);
	m.push(2);
	m.push(7);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(9);
	m.push(8);

    while(!m.empty()){
        cout<<m.top()<<"\n";
        m.pop();
    }

}