#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int s, int d, int w){
    adj[s].push_back({s, w});
    adj[d].push_back({d, w});
}

void printThis(vector<pair<int, int>> adj[], int v){
    for(int i=0; i<v; ++i){
        cout << i;
         for(int j=0; j < adj[i].size(); ++j){
            cout << "->" << adj[i][j].first << "(" << adj[i][j].second << ")" ;
         }
        cout << endl;
    }
}

int main(){

    int n = 5;
    vector<pair<int, int>> adj[n];


    addEdge(adj, 0 , 1, 10);
    addEdge(adj, 0 , 2, 20);
    addEdge(adj, 1 , 2, 30);
    addEdge(adj, 2 , 3, 30);
    addEdge(adj, 2 , 4, 50);

    printThis(adj, n);
    return 0;

}