#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
/*! \namespace std
  \brief using namespace std
  
  this document uses the namespace std
*/
using namespace std;

#include "middleearth.h"
/**@brief computeDistance method
 *
 * computes the distance between two cities in a given land of type
 * MiddleEarth.
 * @return float
 * @param me is a MiddleEarth object that is passed by reference
 * @param start is a string object where the journey starts
 * @param dests is a vector<string> that holds all the cities in the itenerary
 */
float computeDistance (MiddleEarth &me, string start, vector<string> dests);
/**@brief printRoute method
 *
 * prints the Route that the traveler is taking
 * @param start is the string which the traveler starts at
 * @param dests is a vector<string> of all the cities the traveler needs to 
 * go to
 */
void printRoute (string start, vector<string> dests);
/**@brief main method
 *
 * reads 5 command line parameters: width, height, num_cities, rand_seed, 
 * cities_to_visit.
 * @return int
 * @param argc the first value of the comman line prompt, an int
 * @param argv the second value of the command line promt, a char**
 */
int main (int argc, char **argv) {
/** checking to see if the correct amount of parameters were given
*
* if the correct number of files were given, then this if statement is
* ignored. If not, then this if statement is triggered and the code exits
* with exit(0)
*/
    if ( argc != 6 ) {
        cout << "Usage: " << argv[0] << " <world_height> <world_width> "
             << "<num_cities> <random_seed> <cities_to_visit>" << endl;
        exit(0);
    }
    int width, height, num_cities, rand_seed, cities_to_visit;
    sscanf (argv[1], "%d", &width);
    sscanf (argv[2], "%d", &height);
    sscanf (argv[3], "%d", &num_cities);
    sscanf (argv[4], "%d", &rand_seed);
    sscanf (argv[5], "%d", &cities_to_visit);
    // Create the world, and select your itinerary
    MiddleEarth me(width, height, num_cities, rand_seed);
    vector<string> old_dests = me.getItinerary(cities_to_visit);
    string start = old_dests[0];
    vector<string> dests;
    for (int k = 1; k<old_dests.size(); k++){
      dests.push_back(old_dests[k]);
    }
    float min = computeDistance(me, start, dests);
    vector<string> shortest = dests;
    //printRoute("Bree", dests);
    //cout << "Distance: " << computeDistance(me, "Bree", dests) << endl;
    sort(dests.begin(), dests.end());
    while (next_permutation(dests.begin(), dests.end())){
      if (min > computeDistance(me, start, dests)){
	min = computeDistance(me, start, dests);
	shortest = dests;
      }
    }
    cout << "Minimum path has distance : " << min << ": ";
    printRoute(start, shortest);
    //cout << "Distance: " << min << endl;
    return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parameter, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
  int lastI = dests.size()-1;
  float ret = me.getDistance(start, dests[0]) + me.getDistance(start, dests[lastI]);
  for (int j = 0; j<lastI; j++){
    ret += me.getDistance(dests[j], dests[j+1]);
  }
  
  return ret;
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  The output should be of the form:
// Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor
void printRoute (string start, vector<string> dests) {
  cout << start << " -> ";
  for (int i = 0; i<dests.size(); i++){
    cout << dests[i] << " -> ";
  }
  cout << start << endl;
}
