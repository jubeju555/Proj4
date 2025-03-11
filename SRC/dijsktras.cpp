<<<<<<< HEAD
// dijkstra's.cpp
=======
// dijsktras.cpp
>>>>>>> d28c978 (min distance should be done)

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
<<<<<<< HEAD
/*and need something to store graph - lets use a priority queue, since the smallest weight will just be at the top
we can use like a min heap and keep finding the smallest way to a encompass the "map"
*/
// pretty close to geeks4geeks might need to change to queue
int mindist()
{
    set<int> visited;
    vector<int> dist;
    int min = INT_MAX, min_index;
=======
/*and need something to store graph - lets use a priority queue, since the smallest weight will just be at the top 
we can use like a min heap and keep finding the smallest way to a encompass the "map" 
*/
// pretty close to geeks4geeks might need to change to queue
int mindist(){
  set <int> visited;
vector <int> dist;  
int min = INT_MAX, min_index;
>>>>>>> d28c978 (min distance should be done)
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
<<<<<<< HEAD
void printSolution(int dist[], int n)
{
    int v = n;
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < v; i++)
        printf("\t%d \t\t\t\t %d\n", i, dist[i]);
}
int dijsktrasalgo()
{
    int weight = 0;
    int start = 0;
    int end = 0;
    // store shortest path somewhere in an int
    // use a bool to check if the node is the shortest path
    // use mindist function to actually find    the shortest path
    // update the distances of the nodes
    // use a priority queue to store the weights
    
}
int main(int argc, char *argv[])
{
    int weight, n;
    int graphx, graphy;
    while (cin >> n)
    {
        dijsktrasalgo();
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
    }
    return 0;
}
=======


int dijsktrasalgo (){
int weight = 0;
int start = 0;
int end = 0;




}
int main(int argc, char *argv[]) {
   int weight, n;
   int graphx, graphy;
    while(cin >> n){
    dijsktrasalgo();
    // cout << "Enter the number of nodes: " << n << endl;
    cin >> n;
    cin >> graphx >> graphy;

    }
    return 0;
}

>>>>>>> d28c978 (min distance should be done)
