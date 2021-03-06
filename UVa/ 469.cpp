#include<bits/stdc++.h>
using namespace std;


char grid[100][100];
int vis[100][100];


int dr[] = {1,1,0,-1,-1,-1,0,1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1};


int n, m, sum;

int safe(int n, int m, int x, int y)
{
  return x>=0 && y>=0 && x<n && y<m;
}


void bfs(int n, int m, int sx, int sy)
{
    queue< pair<int, int> > Q;


    Q.push(make_pair(sx,sy));

    vis[sx][sy]=1;


    while(!Q.empty())
    {
        int r = Q.front().first;
        int c = Q.front().second;

        Q.pop(); 
        sum++;

        for(int i=0;i<8;i++)
        {
           int a = r+dr[i];
           int b = c+dc[i];

            if(safe(n,m,a,b) && !vis[a][b] && grid[a][b]=='W')
            {
                vis[a][b]=1;
                Q.push(make_pair(a,b));
            }
        }
    }

}


int main()
{
    ios::sync_with_stdio(false);
    int tc, n, m, sx, sy;
    char str[105];

    scanf("%d ", &tc);
    while(tc--)
    {
         memset(grid, 0, sizeof(grid));
         int p = 0;

         while(gets(str) && strlen(str)>0)
         {
            if (str[0] == 'L' || str[0] == 'W')
            {
                 sscanf(str, "%s", grid[p++]);
            }
            else
            {
                sscanf(str, "%d %d", &sx, &sy);
                memset(vis, 0, sizeof(vis));
                sum = 0;
              
                n =  sizeof grid/sizeof (grid[0]);
                m =  sizeof grid[0]/sizeof grid[0][0];

                bfs(n, m, sx-1, sy-1);

                printf("%d\n",sum);
            }
         }
        if(tc>0)  printf("\n");
    }

    return 0;
}
