#include<bits/stdc++.h>
using namespace std;


# define V 4
void init(int arr[][V]) {
    int i, j;

    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            arr[i][j] = 0;
        }
    }
}

void addEdge(int arr[][V], int i, int j) {
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void printAdjMatrix(int arr[][V]) {
    int i, j;

    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
             cout << arr[i][j];
        }
        cout << endl;
    }
}


int main(){

    int adjMatrix[V][V];
    int e, i, u, v;

    init(adjMatrix);

   
    cout <<"number of edges: " << endl;
    cin >> e ;

   
    cout << "Enter edges (u v): " << endl;

    for (i = 0; i < e; i++) {
        cin >> u >> v ;
        addEdge(adjMatrix, u, v);
    }

    
    cout << "Matrix: " << endl;
    printAdjMatrix(adjMatrix);

    return 0;



}