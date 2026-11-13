

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int s, int d){
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void BFS(vector<int> adj[], int v, int start){
    vector<bool> visited(v, false);
    stack<int> sq;

    visited[start] = false;
    sq.push(start);

    cout << " bfs: ";
    while(!sq.empty()){

        int node = sq.top();

        visited[node] = true;
        sq.pop();

        cout << node << endl;

      if(!visited[node]){
        visited[node] = true;
        cout << node << " ";

        for(int i=0; i<adj[node].size(); ++i){

             int a = adj[node][i];

            if(!visited[a]){
                visited[a] = true;
                sq.push(a);
            }
        }

      }

    }

}
int main(){

    int n=8;

    vector<int> adj[n];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 5);
    addEdge(adj, 2, 6);
    addEdge(adj, 3, 6);
    addEdge(adj, 3, 7);


    BFS(adj, n , 0);
    
    return 0;
 
}