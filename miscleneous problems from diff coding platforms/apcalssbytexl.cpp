#include <bits/stdc++.h>
using namespace std;

class Graph {
    int vertices;
    vector<list<int>> adjList;

public:
    Graph(int v) {
        vertices = v;
        adjList.resize(vertices);
    }

    void addEdge(int source, int dest) {
        adjList[source].push_back(dest);
    }
    void bfs(int source){
        bool visited;
        

    }

    void displayGraph() {
        for (int i = 0; i < vertices; i++) {
            cout << i << " -> ";
            for (int node : adjList[i]) {
                cout << node << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g1(6);

    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 3);
    g1.addEdge(3, 4);
    g1.addEdge(4, 5);
    g1.addEdge(1, 4);

    g1.displayGraph(); 

    return 0;
}