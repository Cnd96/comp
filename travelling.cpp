#include "bits/stdc++.h"
using namespace std;
int noCities; // integer variable to  for number of cities
int mindis = INT_MAX; //minimum distance (answer) initialized by maximum integer value
bool visited[10000];// boolean array to check the visited nodes in the graph
int randomNumber;//integer variable hold random numbers
vector<vector<int>> distanceData; // 2D vector hold distance between cities

//Method to generate distance between cities. Takes number of cities as the arguement
void generateDistance(int n){
    //Assinging distance equals zero for all the cities
    for (int i = 0; i < n; i++)
    {
        vector<int> vec(n, 0);
        distanceData.push_back(vec);
    }

    //Generating random numbers and assinging as the distance between two cities in the 2D vector distanceData
    for (int i = 0; i < distanceData.size()-1; i++)
        for (int j= i+1; j < distanceData[i].size(); j++){
            randomNumber = (rand() % 300) + 1;
            distanceData[i][j]=randomNumber;
            distanceData[j][i]=randomNumber;
        }

 // Displaying the distance matrix. Not neccasary for calculating minimum distance. 
    // Just to display the randomly generated distance and verify.  
    for (int i = 0; i < distanceData.size(); i++)
    {
        cout<<"[";
        for (int j= 0; j < distanceData[i].size(); j++)
            cout<<distanceData[i][j]<<",";
        
        cout<<"],\n";
    }
}

//Method to calculate the minimum distance 
//Take the current city in  the graph, current distance travled and number of current visited cities as the arguement
void calculateDistance(int i, int currentdistance, int t)
{
    //Making the current city as visited in the visited boolean array
    visited[i] = true;
    // Incrementing the current number of visited cities
    t++;

    //Check whether all the cities are visited
    if (t == noCities)
    {
        /*
        If all the cities are visited add the distance between current city and starting city to the current distance
        and assigning the minimum value between current distance and current minimum distance to  current minimum distance
        */
        mindis = min(mindis, currentdistance + distanceData[i][0]);
        // making current city as unvisited for backtrack
        visited[i] = false;
        return;
    }
    //Iterating over all the cities to check the unvisited cities
    for (int j = 0; j < noCities; j++)
    {
        // checking whether a city is not visited
        if (visited[j] == false)
        {
/* checking whether the sum of current distance travelled and  the distance between current city to the next unvisited city 
            is greater than current minimum distance. 
            This validation is to stop unneccasary recursive calls.
            */
            if ( (currentdistance+ distanceData[i][j])>= mindis)
            {
                // making current city as unvisited for backtrack and returnig without making a recursive call to next unvisited city
                visited[i] = false;
                return;
            }
            /*
            moving to the next unvisited city 
            */
            calculateDistance(j, currentdistance + distanceData[i][j], t);
        }
    }

    // making current city as unvisited for backtrack
    visited[i] = false;
}

int main()
{
    srand((unsigned)time(NULL));
    memset(visited, false, sizeof(visited));

    cout<<"Enter no of cities :";
    cin>>noCities;
    cout<<"\n";
    cout<<"Distance Matrix"<<"\n";
    generateDistance(noCities);
    const clock_t begin_time = clock();

    //calling calculateDistance function
    calculateDistance(0, 0, 0);
    
    cout << "\nMinimum Distance :";
    cout << mindis<<"\n";
    cout << "Time taken  :"<<(float( clock () - begin_time )/CLOCKS_PER_SEC)<<"seconds";
    return 0;
}









   
