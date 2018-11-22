/*! \class MiddleEarth
    \brief creates MiddleEarth

    contains all mehtods and variables needed for MiddleEarth
*/
#include <iostream>
#include <vector>
#include <string>
#include <map>

/*! \def MIDDLEEARTH_H
    \brief class definition of MiddleEarth
    
    defines all mehtods and variables for MiddleEarth class. 
*/
#ifndef MIDDLEEARTH_H
#define MIDDLEEARTH_H
/*! \namespace std
    \brief using namespace std

    this document uses the namespace std
*/
using namespace std;

class MiddleEarth {
private:
  
/*! \var num_city_names
  \var xsize
  \var ysize
  \brief private variables
  
    int num_city_names, int xsize, int ysize
*/
    int num_city_names, xsize, ysize;
/*! \var xpos
  \var ypos
  \brief private variables
    
    vector<float> xpos, ypos
    two empty vectors
*/
    vector<float> xpos, ypos;
/*! \var cities 
  \brief private variable
    
    vector<string> cities
*/
    vector<string> cities;
/*! \var distances 
  \brief private variable
    
    float pointer distances
*/
    float *distances;
/*! \var indices 
  \brief private variable
    
    map<string, int> indices
*/
    map<string, int> indices;

public:
/*! \brief constructor for MiddleEarth
    
     MiddleEarth constructor takes the the size of the land (in the integers 
     xsize and ysize), the number of cities (in the integer numcities), and 
     the number of seeds (in the integer seed)
     \param xsize an integer argument
     \param ysize an integer argument
     \param numcities an integer argument
     \param seed an integer argument
*/
    MiddleEarth (int xsize, int ysize, int numcities, int seed);
/*! \brief deconstructor for MiddleEarth
      
    the deconstructor is called when delete is called on a MiddleEarth 
    object or when the MiddleEarth object goes out of scope
*/
    ~MiddleEarth();
/*! \brief void method
    
      method to print
      prints out the city names and where the cities are located
*/
    void print();
/*! \brief void method
    
      method to print the Table
      prints a table full of the distances between cities
*/
    void printTable();
/*! \brief getDistance method
    
      gets the distance between two cities
      \param city1 is a string argument
      \param city2 is a string argument
      \returns float of distance between city1 and city2
*/
    float getDistance (string city1, string city2);
/*! \brief getItinerary method
    
     gets the Itinerary for the trip
     \param length is an unsigned int
     \returns vector<string> of random cities to go to
*/
    vector<string> getItinerary(unsigned int length);
};

#endif
