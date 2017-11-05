#include <iostream>
#include <string>

class generalSet {

public:
  unsigned int statA = 0; //goal is to get this to 10000
  unsigned int statB = 0; //the higher this is the faster statA increases automaticly
  unsigned int statC = 0; //the higher this is the slower statA increases automaticly
  unsigned int statD = 1000; //Constantly decreasing if 0 you lose
  unsigned int PositiveLuck = 0; //good luck
  unsigned int NegativeLuck = 0; //bad luck
  unsigned int CurrentTime = 0; //Time since the beginning of the match
  int statH = 500;  //keep this stat close to 500
  int status = 1; // ui status effects


private:


}

class attackingSet {

public:
  int Angle = 0;  //angle of the cannon
  int Power = 0;  //Power of the cannon
  int Luster = 0; //Luster of the cannon (how fast the projectile travels and how powerful)
  int japeCounter = 0; //number of japes performed
  int swoon = 0;  //number of swoons perfomed


private:


}
class worldSet {
public:
  bool freeMarket = false;
  
}

class countrySet {
public:
  int governmentForm = 1 //the current goverment Form
  int religion = 0;
  int ResourceBlue = 100; //primary primary building matierial
  int ResourceRed = 100;  //secondary primary building matierial
  int ResourceGreen = 100;  //trianary primary building matierial
  int ResourceYellow = 0; //secondary building matierial
  int ResourcePurple = 0; //trianary building matierial
  int ResourceGold = 0; //very valuable building matierial

}

class buisnessSet{
public:
    int employees = 0; //Turns resources into money
    int breaks = 0;
    int wage = 0;
    int demand = 0;
    int supply = 0;
    int price = 0;
    int slaves = 0;  //Turns resources into money but faster
    bool uniforms;

}

class financeSet {
public:
    unsigned int Money = 0; //Money
    int MoneyBanked = 0;
    int intrest = 0;
    int loans = 0;
    int tax = 0;
    int coupons = 0;
}

class dndSet {
public:
  int charactersHad
  int strength
  int dex
  int wisdom
  int will
  int intelegence
  int fortitude
  int gold
  int speed
  int characterClass
  int characterRace
}

class childhoodSet {
public:
  int browniePoints = 0;
  int swearJarValue = 0;
  int papersDelivered = 0;
  int AdventuresHad = 0;
  int toys = 0;
  int livingToys = 0;
  int deadToys = 0;
  int pets = 0;
  int friends = 0;
}

class emotionSet {
public:
  int happiness = 0;
  int sadness = 0;
  int madness = 0;
  int angryness = 0;
  int frustration = 0;
  int scardness = 0;
}


class rctSet {
public:
  int thrill = 0;
  int excitement = 0;
  int visitors = 0;
  int rollercoasters = 0;
  int mediumintensityrides = 0;
  int merrygorounds = 0;
  int food stands = 0;
  int drink stands = 0;
  int returants = 0;
  int bars = 0;
  int admisionPrice = 0;
  int weather = 0;
  int parkInterest = 0;
}
