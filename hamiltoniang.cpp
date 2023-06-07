#include<iostream>
#include<vector>

using namespace std;
bool is_valid(int v,int pos,vector<int>&path,vector<vector<int>>&graph)
{
    if(graph[path[pos-1]][v]==0)
    {
        return false;
    }
    for(int i=0; i<pos; i++)
    {
        if(path[i]==v)
        {
            return false;
        }
    }
    return true;
}

bool hamiltanian_cycle_helper(int pos, vector<int>&path, vector<vector<int>>&graph)
{
    int n = graph.size();
    if(pos == n)
    {
        if(graph[path[pos-1]][path[0]] == 1)
        {
            return true;
        }
        return false;
    }
    for(int v=1; v<n; v++)
    {
        if(is_valid(v,pos,path,graph))
        {
            path[pos] = v;
            if(hamiltanian_cycle_helper(pos+1,path, graph))
            {
                return true;
            }
            path[pos]= -1;
        }
    }
    return false;
}

bool hamiltanian_cycle(vector<vector<int>>&graph)
{
    int n = graph.size();
    vector<int>path(n,-1);
    path[0]=0;
    if(hamiltanian_cycle_helper(1,path,graph))
    {
        cout<<"Hamiltanian cycle exist:"<<endl;
        for(int i=0;i<n; i++)
        {
            cout<<path[i]<<"";
        }
        cout<<path[0]<<endl;
        return true;
    }
    cout<<"Hamiltanian cycle does not exist:"<< endl;
    return false;
}


int main()
{
    vector<vector<int>>graph={{0,1,0,1,0},
                              {1,0,1,1,1},
                              {0,1,0,0,1},
                              {1,1,0,0,1},
                              {0,1,1,1,0}};

hamiltanian_cycle(graph);
return 0;                              
}