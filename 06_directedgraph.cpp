#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

struct edge
{
    int from,to;
    edge(){}
    edge(int _from,int _to){from=_from,to=_to;}
    
};
using namespace std;


int par[100005];

edge EDGE[100005];

int find_par(int r)
{
    if(par[r]==r) return r;
    return par[r]=find_par(par[r]);
}

int main()
{
    cout<<"Enter number of nodes: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        par[i]=i;
    }
    EDGE[1]=edge(1,2);
    EDGE[2]=edge(1,3);
    EDGE[3]=edge(2,4);
    EDGE[4]=edge(2,4);
    EDGE[5]=edge(5,6);
    EDGE[6]=edge(5,7);
    EDGE[7]=edge(6,8);
    
    
    for(int i=1;i<=7;i++)
    {
        int u=EDGE[i].from;
        int v=EDGE[i].to;
        int x=find_par(u);
        int y=find_par(v);
        if(x!=y)
        {
            par[x]=y;
        }
    }
    
    cout<<"Enter two nodes to check if there is a route between them\n";
    cout<<"Enter -1 -1 to end\n";
    int u,v;
    while(cin>>u>>v)
    {
        if(u<=-1 && v<=-1) break;
        if(u>n || v>n) cout<<"Invalid Node!!!\n";
        
        if(find_par(u)==find_par(v))
        {
            cout<<"There is a route\n";
        }
        else
        {
            cout<<"There is no route\n";
        }
    }
    
    
    
    
    
}

