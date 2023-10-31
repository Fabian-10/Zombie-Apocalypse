#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <denizenz.h>

class Zombie : public Denizen
{
public:

    Zombie(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}

    Zombie(string d) : Denizen(d) {}
    
    Denizen *speak();

    std::string getType();

    // Determines the out come of an zombie crossing ways with an alerted
    // Out come is random, however the user can increase or decrease the probability of something happening
    // If return false, that info is use to change the ignorant to alerted
    bool encounter(Denizen *&ptr);

    // No code
    void convert_ignorant(Denizen *&ptr);

    // Change in what district the denizen is located
    void change_district(Denizen *&ptr, string d);

};

#endif