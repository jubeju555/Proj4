// dijkstra's.cpp

// Main Execution

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <queue>
#include <algorithm>
#include <set>
#include <climits>



using namespace std;
// need something to store weights
/*and need something to store graph - lets use a priority queue, since the smallest weight will just be at the top
we can use like a min heap and keep finding the smallest way to a encompass the "map"
*/
// pretty close to geeks4geeks might need to change to queue
struct graph {
    // int weight;
    int node;
    int v = 1;
    set<int> visited;
    vector<int> dist;
    int mindist();
    int dijkstrasalgo();
    void printSolution(int dist[], int n);
};

int graph::mindist()
{
    
    int min = INT_MAX, min_index;
    int verti = 0;
    for (int i = 0; i < verti; i++)
    {
        if (visited.find(i) == visited.end() && dist[i] <= min)
        {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}


void graph::printSolution(int dist[], int n)
{
  printf("first the final distance, then hopefully the visited nodes\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d", dist[i]);
    printf("%d", visited.count(i));
  }
}

int graph::dijkstrasalgo()
{
    int currentweight = 0;
    int start = 0;
    int end = 0;
    priority_queue<int> minqueue;

    // store shortest path somewhere in an int
    // use a bool to check if the node is the shortest path
    // use mindist function to actually find the shortest path
    // update the distances of the nodes
    // use a priority queue to store the weights
    
    // set distance of verts to infinity, then set initial distance to 0
    dist.resize(v, INT_MAX);
    dist[start] = 0;

    // ideally finds the shortest path
    for (int count = 0; count < v - 1; count++)
    {
        // use mindist to find smallest distance of verticies that havent been visited, then set that to current index
        int u = mindist();
        visited.insert(u);

        // Update dist value of the adjacent vertices of the picked vertex
        for (int i = 0; i < v; i++)
        {
            // Update dist[i] if it is not in visited, there is an edge from u to i,
            // and total weight of path from start to i through u is smaller than current value of dist[i]
            if (!visited.count(i) && dist[u] != INT_MAX && dist[u] + currentweight < dist[i])
            {
                dist[i] = dist[u] + currentweight;
            }
        }
    }

    // Print the constructed distance array
    printSolution(dist.data(), v);

    
}
// has to be redone
int main(int argc, char *argv[])
{
    graph g;
    int weight, n;
    int graphx, graphy;
    while (cin >> n)
    {
        // dijsktrasalgo(n);
        // cout << "Enter the number of nodes: " << n << endl;
        // reads in number of types and store the weight of each node
        cin >> n;
        vector<pair<char, int>> nodes;
        for (int i = 0; i < n; ++i)
        {
            char node;
            int weight;
            cin >> node >> weight;
            nodes.push_back(make_pair(node, weight));
            
        }
        cin >> graphx >> graphy;
        g.dijkstrasalgo();
    }
    return 0;
}
