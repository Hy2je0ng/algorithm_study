#include <bits/stdc++.h>
#define MAX 1010

using namespace std;

int graph[MAX][MAX];
bool visited[MAX][MAX] = {false,};

void dfs(int x, int y){
	if(!visited[x][y] && graph[x][y] == 0){
		visited[x][y] = true;
		dfs(x-1, y);
		dfs(x+1, y);
		dfs(x, y-1);
		dfs(x, y+1);
	}
}
	
int main(){
	
	int n, m;	
	
	// 배열 1로 초기화 
	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			graph[i][j] = 1;
		}
	}
	
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%1d", &graph[i][j]);
		}
	}

	int result = 0;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(graph[i][j] == 0 && !visited[i][j]){
				dfs(i,j);
				result += 1;	
			}
		}
	}
	
	printf("%d", result);
	
	return 0;
}
