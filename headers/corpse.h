#ifndef CORPSE_H
#define CORPSE_H

#include <denizenz.h>

class Corpse : public Denizen
{
public:

    Corpse(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}
    
    Denizen *speak();

    std::string getType();

    // No code
    bool encounter(Denizen *&ptr);

    // No code
    void convert_ignorant(Denizen *&ptr);

    // Part of the move function
    void change_district(Denizen *&ptr, string d);

};

#endif