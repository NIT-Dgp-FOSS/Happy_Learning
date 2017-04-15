#include<iostream>

using namespace std;

int visited[10]={0};
int cmptvisited[10]={0};
int Graph[10][10],n;


bool dfs(int s)
{

}
int main()
{
    int s;

    cout<<"Enter number of Nodes :";
    cin>>n;
    cout<<"Enter Edges Between Nodes :";

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>Graph[i][j];

    if(dfs(1))
    {
        cout<<"Graph Contain Cycle :";

    }
    else
        cout<<"Graph doesn't contain Cycle";
}
