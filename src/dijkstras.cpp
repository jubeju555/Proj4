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
#include <map>
#include <string>
<<<<<<< HEAD
=======


>>>>>>> f7f4787 (progress from personal machine)

using namespace std;
// need something to store weights
/*and need something to store graph - lets use a priority queue, since the smallest weight will just be at the top
we can use like a min heap and keep finding the smallest way to a encompass the "map"
*/
// pretty close to geeks4geeks might need to change to queue
struct graph
{
    int weight = 0;
    int node;
    int v;
    // set<int> visited;
    vector<int> dist;
    int mindist(vector<int> distance, vector<bool> visited);
    int dijkstrasalgo();

};
<<<<<<< HEAD
void printsolution(int dist[], int n)
=======

int graph::mindist()
{

    int min = INT_MAX;
    int minindex = -1;
    int verti = distance.size();
    for (int i = 0; i < verti; i++)
    {
        if (!visited[i] && dist[i] <= min)
        {
            min = dist[i];
            minindex = i;
        }
    }
    printf("%d", minindex);
    return minindex;
}


void printSolution(int dist[], int n)
>>>>>>> f7f4787 (progress from personal machine)
{
    int v = n;
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < v; i++)
        printf("\t%d       %d\n", i, dist[i]);
}
int graph::mindist(vector<int> distance, vector<bool> visited)
{

    int min = INT_MAX;
    int minindex = -1;
    int verti = distance.size();
    for (int i = 0; i < verti; i++)
    {
        if (!visited[i] && dist[i] <= min)
        {
            min = dist[i];
            minindex = i;
        }
    }
    printf("%d", minindex);
    return minindex;
}

int graph::dijkstrasalgo()
{
    // Priority queue to store (distance, vertex) pairs, sorted by distance
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_pq;

    vector<bool> visited(v, false);
    vector<int> distance(v, INT_MAX);

    int start = 0; // Assuming the start node is 0
    distance[start] = 0;

    // Push the start node into the priority queue
    min_pq.push({0, start});

    while (!min_pq.empty())
    {
        // Extract the node with the smallest distance
        int u = min_pq.top().second;
        min_pq.pop();

        // If the node is already visited, skip it
        if (visited[u])
            continue;

        visited[u] = true;

        // Iterate through all neighbors of the current node
        for (int i = 0; i < v; i++)
<<<<<<< HEAD
        {
            // Check if there's an edge and the node is not visited
            if (!visited[i] && distance[u] != INT_MAX && distance[u] + weight < distance[i])
=======
        {   // double check if this is correct
            // Update dist[i] if it is not in visited, there is an edge from u to i,
            // and total weight of path from start to i through u is smaller than current value of dist[i]
            if (!visited.count(i) && dist[u] != INT_MAX && dist[u] + weight < dist[i])
>>>>>>> f7f4787 (progress from personal machine)
            {
                distance[i] = distance[u] + weight;

                // Push the updated distance and node into the priority queue
                min_pq.push({distance[i], i});
            }
        }
    }
<<<<<<< HEAD
    printsolution(distance.data(), v);

    // int weight = 0;
    // int start = 0;
    // int end = 0;
    // priority_queue<int> minqueue;

    // // store shortest path somewhere in an int
    // // use a bool to check if the node is the shortest path
    // // use mindist function to actually find the shortest path
    // // update the distances of the nodes
    // // use a priority queue to store the weights

    // // Initialize distances to all vertices as infinite and distance to the source as 0
    // dist.resize(v, INT_MAX);
    // dist[start] = 0;

    // // Find shortest path for all vertices
    // for (int count = 0; count < v - 1; count++)
    // {
    //     // Pick the minimum distance vertex from the set of vertices not yet processed
    //     int u = mindist();
    //     visited.insert(u);

    //     // Update dist value of the adjacent vertices of the picked vertex
    //     for (int i = 0; i < v; i++)
    //     {   // double check if this is correct
    //         // Update dist[i] if it is not in visited, there is an edge from u to i,
    //         // and total weight of path from start to i through u is smaller than current value of dist[i]
    //         if (!visited.count(i) && dist[u] != INT_MAX && dist[u] + weight < dist[i])
    //         {
    //             dist[i] = dist[u] + weight;
    //         }
    //     }
    // }
    // Print the constructed distance array
    // printsolution(dist.data(), v);
    return 0;
}

/*
- order of read in
=======
    // Print the constructed distance array
    // printsolution(dist.data(), v);
    return 0;
}

/*
order of read in
>>>>>>> f7f4787 (progress from personal machine)
amount of pairs
pairs
graph(rows, columns)
start row  start col
target row target col
*/
<<<<<<< HEAD
 
=======
>>>>>>> f7f4787 (progress from personal machine)


int main(int argc, char *argv[])
{
    // order of read in
    int numpairs;
<<<<<<< HEAD
    map<string, int> travelcost;
=======
    map<string, int> tilecosts;
>>>>>>> f7f4787 (progress from personal machine)
    int mapRows, mapCols;
    vector<vector<string>> mapgrid;
    int startRow, startCol, endRow, endCol;

    // Read the number of tile types
    cin >> numpairs;

    // Read tile names and their costs
    for (int i = 0; i < numpairs; i++)
    {
        string tileName;
        int tileCost;
        cin >> tileName >> tileCost;
<<<<<<< HEAD
        travelcost[tileName] = tileCost;
=======
        tilecosts[tileName] = tileCost;
>>>>>>> f7f4787 (progress from personal machine)
    }

    cin >> mapRows >> mapCols;

    // Read the map grid
<<<<<<< HEAD
    mapgrid.resize(mapRows * mapCols);
=======
    mapgrid.resize(mapRows, vector<string>(mapCols));
>>>>>>> f7f4787 (progress from personal machine)
    for (int i = 0; i < mapRows; i++)
    {
        for (int j = 0; j < mapCols; j++)
        {
            cin >> mapgrid[i][j];
        }
    }

    // Read the start and end positions
    cin >> startRow >> startCol >> endRow >> endCol;

    // Create the graph
    graph g;
    g.v = mapRows * mapCols;
    g.dist.resize(g.v, INT_MAX);

    // adjancency list with directions
    vector<pair<int, int>> directions;
    directions.push_back(pair<int, int>(-1, 0));
    directions.push_back(pair<int, int>(1, 0));
    directions.push_back(pair<int, int>(0, -1));
    directions.push_back(pair<int, int>(0, 1));

<<<<<<< HEAD
    // Create the graph
    // for (int i = i; i < mapRows; i++)
    // {
    //     for (int j = 0; j < mapCols; j++)
    //     {
    //         // Calc current  index 
    //         int current = i * mapCols + j;

    //         // go through diff directions
    //         for (int d = 0; d < directions.size(); d++)
    //         {
    //             // Calculate the new row and column based on the current direction
    //             int newRow = i + directions[d].first;
    //             int newCol = j + directions[d].second;

    //             // check if in bounds
    //             if (newRow >= 0 && newRow < mapRows && newCol >= 0 && newCol < mapCols)
    //             {
    //                 // Calculate the neighbor node index based on the new row and column
    //                 int neighbor = newRow * mapCols + newCol;

    //                 // Get the weight (cost) of moving to the neighboring tile
    //                 int weight = travelcost[mapgrid[newRow][newCol]];
                  

    //                 // Add edge to the graph (you can use adjacency list or matrix)
    //                 // For simplicity, you can store edges in a vector of tuples
    //                 // Example: edges.push_back(make_tuple(currentNode, neighborNode, weight));
    //             }
    //         }
    //     }
    // }
=======
    
>>>>>>> f7f4787 (progress from personal machine)

    // Call Dijkstra's algorithm
    g.dijkstrasalgo();

    return 0;
}
