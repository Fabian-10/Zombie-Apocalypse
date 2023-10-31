#ifndef IGNORANT_H
#define IGNORANT_H

#include <denizenz.h>


class Ignorant : public Denizen
{
public:

    // Arg Constructor
    Ignorant(std::string n, std::string d, map<string, int> c) : Denizen(n, d, c) {}

    Ignorant(string d) : Denizen(d) {}

    Denizen *speak();

    string getType();

    // No code
    bool encounter(Denizen *&ptr);
    
    // No code
    void convert_ignorant(Denizen *&ptr);

    // Change the district of a specific denizen
    void change_district(Denizen *&ptr, string d);

};

#endif