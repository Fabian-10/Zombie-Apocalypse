#ifndef ALERTED_H
#define ALERTED_H

#include <denizenz.h>

class Alerted : public Denizen
{
public:

    Alerted(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}

    Alerted(string d) : Denizen(d) {}


    Denizen *speak();

    // Let the programer know what type of denizen is he dealing with
    std::string getType();

    // Determines the out come of an alert crossing ways with a zombie or ignorant
    // Out come is random, however the user can increase or decrease the probability of something happening
    bool encounter(Denizen *&ptr);

    // Ignorant become alerted that is an apocalypses
    void convert_ignorant(Denizen *&ptr);

    // Only change the district
    void change_district(Denizen *&ptr, string d);

};

#endif