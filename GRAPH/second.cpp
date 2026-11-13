#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int s, int d){
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void printThis(vector<int> adj[], int v){
    for(int i=0; i<v ; ++i){
        cout << i ;
         for(int j=0; j<adj[i].size(); ++j){
            cout << "->" << adj[i][j] ;
         }
        cout << endl;
    }
}


int main(){

    int n = 5 ;
    

    vector<int> adj[n];

    addEdge(adj, 0 , 1);
    addEdge(adj, 0 , 2);
    addEdge(adj, 1 , 2);
    addEdge(adj, 2 , 3);
    addEdge(adj, 2 , 4);
    
    printThis(adj, n);
    return 0;
}