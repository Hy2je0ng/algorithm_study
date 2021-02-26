#include <bits/stdc++.h>

using namespace std;

int main(){
	
	stack<int> s;
	
	s.push(5);
	s.push(2);
	s.push(3);
	s.push(7);
	s.pop();
	s.push(1);
	s.push(4);
	s.pop();
	
	while(!s.empty()){
		printf("%d ",s.top());
		s.pop();
	}
	
	return 0;
}
