#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define v 4
#define inf 99
void printsolution(int dist[][v])
{
    cout<<"The following shows the shortest distance:"<<endl;
    for (int i = 0; i < v; i++)
    {
    for(int j=0; j<v; j++)
    {
        if(dist[i][j]  == inf)
        cout<<"inf"<<" ";

        else
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
    }
}

void warsell(int dist[][v])
{
    int i,j,k;

    for(k=0; k<v; k++)
    {
        for(i=0; i<v; i++)
        {
            for(j=0; j<v; j++)
            {
                if(dist[i][j] > (dist[i][k] + dist[k][j]) && dist[i][k] != inf && dist[k][j] != inf)
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printsolution(dist);
}

int main()
{
    int graph[v][v] ;
    /*= {
                        { 0,5,inf,10},
                        { inf, 0, 3, inf},
                        { inf, inf,0,1},
                        { inf,inf,inf,0}
    };
    */

   printf("Enter the values:\n Enter 99 for infinity:");
   for(int i=0; i<v; i++)
   {
    for(int j=0; j<v; j++)
    scanf("%d",&graph[i][j]);
   }

    //for(int i=0; i<v; i++)
   //{
   // for(int j=0; j<v; j++)
   warsell(graph);
   //}
    return 0;
}
