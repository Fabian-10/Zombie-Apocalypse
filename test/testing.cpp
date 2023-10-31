// #include <alerted.h>
// #include <city.h>
// #include <ignorant.h>
// #include <zombie.h>
// #include <gtest/gtest.h>
// #include <map>
// #include <iostream>


// TEST(CITY, ADDRESIDENT)
// {
//     City myCity;
//     std::map<std::string, int> mymap;
//     mymap["Chance of Ignorant becoming a zombie when see a zombie"] = 100;
//     myCity.addResidents(new Ignorant("Fabian", "University", mymap));
//     mymap["null"] = 0;
//     myCity.addResidents(new Zombie("Marchelo", "Uni", mymap));
//     vector<Denizen *> ptr = myCity.getResidents();
//     EXPECT_EQ(ptr[0]->getName(), "Fabian");
//     EXPECT_EQ(ptr[1]->getName(), "Marchelo");
    
// }


// TEST(DENIZEN, ING_TO_ZOMBI)
// {
//     City myCity;
//     std::map<std::string, int> mymap;
//     mymap["Chance of Ignorant becoming a zombie when see a zombie"] = 100;
//     myCity.addResidents(new Ignorant("Fabian", "University", mymap));
//     mymap["nul"] = 0;
//     myCity.addResidents(new Zombie("Marchelo", "Uni", mymap));
//     vector<Denizen *> ptr = myCity.getResidents();
//     ptr[0]->encounter(ptr[1]);
//     EXPECT_EQ(ptr[0]->getName(), "Fabian");
//     EXPECT_EQ(ptr[0]->getType(), "Zombie");
// }

// TEST(DENIZEN, ING_TO_ALE)
// {
//     City myCity;
//     std::map<std::string, int> mymap;
//     mymap["Chance of Ignorant believing the alarmed person"] = 100;
//     myCity.addResidents(new Ignorant("Fabian", "University", mymap));
//     mymap["nul"] = 0;
//     myCity.addResidents(new Alerted("Marchelo", "Uni", mymap));
//     vector<Denizen *> ptr = myCity.getResidents();
//     ptr[1]->encounter(ptr[0]);
//     EXPECT_EQ(ptr[0]->getName(), "Fabian");
//     EXPECT_EQ(ptr[0]->getType(), "Alerted");
// }



// TEST(DENIZEN, ALE_KILL_ZOM)
// {
//     City myCity;
//     std::map<std::string, int> mymap;
//     mymap["Chance of Alerted killing the zombie"] = 100;
//     myCity.addResidents(new Alerted("Fab", "University", mymap));
//     mymap["null"] = 0;
//     myCity.addResidents(new Zombie("Marchelo", "Uni", mymap));
//     vector<Denizen *> ptr = myCity.getResidents();
//     ptr[0]->encounter(ptr[1]);
//     EXPECT_EQ(ptr[1]->getType(), "Corpse");
//     EXPECT_EQ(ptr[1]->getName(), "Marchello");
// }

// TEST(DENIZEN, ALE_TO_ZOM)
// {
//     City myCity;
//     std::map<std::string, int> mymap;
//     mymap["Chance of Alerted becoming a zombie"] = 100;
//     myCity.addResidents(new Alerted("Fabian", "University", mymap));
//     mymap["null"] = 100;
//     myCity.addResidents(new Zombie("Marchelo", "Uni", mymap));
//     vector<Denizen *> ptr = myCity.getResidents();
//     ptr[1]->encounter(ptr[0]);
//     EXPECT_EQ(ptr[0]->getName(), "Fabian");
//     EXPECT_EQ(ptr[0]->getType(), "Zombie" );
// }

// TEST(CITY, ALE_SCA_ZOM)
// {
//     City myCity;
//     std::map<std::string, int> mymap;
//     mymap["Chance of Alerted escaping from the zombie"] = 100;
//     myCity.addResidents(new Alerted("Fabian", "University", mymap));
//     mymap["Chance of Zombie bite successfully"] = 0;
//     myCity.addResidents(new Zombie("Marchelo", "Uni", mymap));
//     vector<Denizen *> ptr = myCity.getResidents();
//     ptr[0]->encounter(ptr[1]);
//     EXPECT_EQ(ptr[0]->getName(), "Fabian");
//     EXPECT_EQ(ptr[1]->getType(), "Alerted");
// }

// int main(int argc, char **argv)
// {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
