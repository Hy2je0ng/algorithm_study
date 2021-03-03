#include <bits/stdc++.h>
#define MAX 210

using namespace std;

int graph[MAX][MAX] = {0, };

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(){
	
	int n, m;	
	
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%1d", &graph[i][j]);
		}
	}
	
	int x = 1, y = 1;
	
	queue<vector<int>> q;
	
	q.push({x,y});
	
	while(!q.empty()){ // bfs
		
		x = q.front()[0];
		y = q.front()[1];
		
		q.pop();
		
		if(x == n && y == m) break;
		
		for(int i = 0; i < 4; i++){
			int nextX = x + dx[i];
			int nextY = y + dy[i];
			
			if(graph[nextX][nextY] == 1){
				q.push({nextX, nextY});
				graph[nextX][nextY] = graph[x][y] + 1;
			}
		}
				
	}

	printf("%d", graph[n][m]);
	
	return 0;
}
