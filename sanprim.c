#include<stdio.h>
int a,b,u,v,h,i,j,n,ne=1;
int visited[10]={0},min,mincost=0,cost[10][10];
void main()
{
printf("Enter the number of nodes: ");
scanf("%d",&n);
printf("\n Enter the adjacency matrix :\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
                                   }
visited[i]=1;
printf("\n");
while(ne<n)
{
for(i=1;i<=n;i++,min=999)
for(j=0;j<n;j++)
if(visited[i]!=0)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
if(visited[u]==0||visited[v]==0){
printf("\nEdge %d :(%d%d)cost:%d",ne++,a,b,min);
mincost+=min;
visited[b]=1;
}
cost[a][b]=cost[b][a]=999;
}
printf("\nminimum cost = %d",mincost);
}

