#include <bits/stdc++.h>
using namespace std;
int graph[10][10];

int main()
{
    int V, E, S, D;
    cout << "Enter the number of vartexes: ";
    cin >> V;

    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Input Every Edge: ";

    for(int i = 1; i <= E; i++){
        int u, v;
        cin >> u >> v;
        graph[u][v] = graph[v][u] = 1;
    }

    cout << "Enter Source: ";
    cin >> S;

    cout << "Enter Destination: ";
    cin >> D;

    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            cout << graph[i][j] << '\t';
        }
        cout << '\n';
    }
    return 0;
}
