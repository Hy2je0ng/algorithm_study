#include <bits/stdc++.h>

using namespace std;

class Fruit {
public:
    string name;
    int score;
    Fruit(string name, int score) {
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 낮은 순서'
    bool operator <(Fruit &other) {
        return this->score < other.score; 
    }
    
    //정렬 기준 '이름 길이'
//    bool operator <(Fruit &other) {
//    	return this->name.length() < other.name.length();
//	} 
};

int main(void) {
	
    int n = 3;
    Fruit fruits[] = {
        Fruit("딸기", 6),
        Fruit("파인애플", 5),
        Fruit("청포도", 3)
    };
    
    sort(fruits, fruits + n);
    
    for(int i = 0; i < n; i++) {
        cout << '(' << fruits[i].name << ',' << fruits[i].score << ')' << ' ';
    }
    
}
