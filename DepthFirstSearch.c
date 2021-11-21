// Depth First search 

#include<stdio.h>
#include<stdlib.h>
int source,V,E,time,visited[20],g[20][20];
void dfs(int i){
    int j;
    visited[i]=1;
    printf("%d->",i+1);
    for(j=0;j<V;j++){
        if (g[i][j]==1 && visited[j]==0)
            dfs(j);
    }
}
int main(){
    int i,j,v1,v2;
    printf("\t\tGRAPHS\n");
    printf("enter the no.of.edges : ");
    scanf("%d",&E);
    printf("enter the no.of vertices : ");
    scanf("%d",&V);
    for(i=0;i<V;i++){
        for(j=0;j<V;j++)
            g[i][j]=0;
    }
    for(i=0;i<E;i++){
        printf("enter the edges(format V1 V2) : ");
        scanf("%d%d",&v1,&v2);
        g[v1-1][v2-1]=1;
    }
    for(i=0;i<V;i++){
        for(j=0;j<V;j++)
            printf("%d ",g[i][j]);
        printf("\n");
    }
    printf("enter the source : ");
    scanf("%d",&source);
        dfs(source-1);
    return 0;
}

/*
	OUTPUT
	
                GRAPHS
enter the no.of.edges : 4
enter the no.of vertices : 4
enter the edges(format V1 V2) : 1
2
enter the edges(format V1 V2) : 2
4
enter the edges(format V1 V2) : 4
3
enter the edges(format V1 V2) : 3
1
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0
enter the source : 1
1->2->4->3->

*/
