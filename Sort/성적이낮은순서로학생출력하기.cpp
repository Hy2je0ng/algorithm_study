#include <bits/stdc++.h>

using namespace std;

class Student{
	public :
		string name;
		int score;
		
		Student(string name, int score){
			this->name = name;
			this->score = score;
		} 
		
		bool operator <(Student& other){
			return this->score < other.score;
		}
};

int main(){
	
	int n;
	vector<Student> v;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		string name;
		int score;
		scanf("%s %d", name.c_str(), &score);
		v.push_back(Student(name, score));
	}
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < n; i++) {
		printf("%s ", v[i].name.c_str());
	}
	
	return 0;
}

