// Taking input using adjacent matrix in Graph.

#include <iostream>
using namespace std;

int main()
{
    // n->no. of nodes , m->no. of edges
    int n, m;
    // Creating a 2-Dimensional Adjacent Matrix
    int adj_matrix[n + 1][n + 1];
    // Marking the box having edges connecting two nodes(let u and v)
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }


    //The above code is for an undirected graph, as u->v and v->u both are connected using edge
    //If,we want to take input for a directed graph, i.e., u->v will only be considered. we will comment the following line:
    // adj_matrix[v][u] = 1;
    return 0;
}