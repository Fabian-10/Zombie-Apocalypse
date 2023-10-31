#ifndef CITY_H
#define CITY_H

#include <vector>
#include <denizenz.h>
#include <map>
#include <fstream>

using std::vector;
using std::map;

/*
The goal is to represent a city that is going to an apocalypse zombie
Imagine is like a Spokane. The thing it that only have 3 districts
It contain the name of the district and the amount of citizen
*/
class City
{
private:

    vector <Denizen *> residents;
    
public:

    // Push back
    void addResidents(Denizen *p);

    // Get method
    vector<Denizen *> getResidents() { return residents; }

    // Go to the through the file name and assign names to 2000 denizens
    // Also, spread the denizens through out the city
    void populate_city();

    // Ability the amount of denizens in each category
    // Get the amount of denizens in each district
    void get_stats(map<string, int> &s);

    // Grab the first alerted in the vector and assign it to an ignorant
    // An ignorant that have sean a zombie and become alerted
    void Ignorant_to_alerted(Denizen *b);

    // Randomly select 1/8 of the population to move between cities
    // The city is randomly selected
    void residents_move();

    // Here is where all the magic happens
    // A function that call more function!!
    void simulate();



};

#endif