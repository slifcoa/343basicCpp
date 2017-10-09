#include "concert.h"
#include<vector>
#include <string>

int main(){

    //Vector of all the Concerts
    std::vector<Concert> concertList;

    //Create 10 concerts and store them into the concertList
    Concert aldean;
    aldean.setName("Dirt Road Tour");
    aldean.setFriends("Austin");
    aldean.setFriends("Scott");
    aldean.setFriends("Mangan");
    aldean.setDesire(7);
    aldean.setDate(5,12,2018);
    concertList.push_back(aldean);

    Concert bryan;
    bryan.setName("Kick the Dust Up Tour");
    bryan.setFriends("Philip");
    bryan.setFriends("Tyler");
    bryan.setFriends("Tracey");
    bryan.setDesire(4);
    bryan.setDate(6,11,2018);
    concertList.push_back(bryan);

    Concert ballard;
    ballard.setName("Young and Crazy Tour");
    ballard.setFriends("George");
    ballard.setFriends("Drew");
    ballard.setFriends("Brendan");
    ballard.setDesire(2);
    ballard.setDate(5,28,2018);
    concertList.push_back(ballard);

    Concert shelton;
    shelton.setName("Sangria Tour");
    shelton.setFriends("Nicole");
    shelton.setFriends("Kaylee");
    shelton.setFriends("Duzzi");
    shelton.setDesire(4);
    shelton.setDate(5,12,2018);
    concertList.push_back(shelton);

    Concert owen;
    owen.setName("American Love Tour");
    owen.setFriends("Zak");
    owen.setFriends("Chris");
    owen.setFriends("Cary");
    owen.setDesire(9);
    owen.setDate(7,10,2018);
    concertList.push_back(owen);

    Concert rucker;
    rucker.setName("Wagon Wheel Tour");
    rucker.setFriends("Prince");
    rucker.setFriends("Madonna");
    rucker.setFriends("MJ");
    rucker.setDesire(8);
    rucker.setDate(2,12,2019);
    concertList.push_back(rucker);

    Concert locash;
    locash.setName("Love this life tour");
    locash.setFriends("rudy");
    locash.setFriends("forest");
    locash.setFriends("rainman");
    locash.setDesire(5);
    locash.setDate(6,27,2018);
    concertList.push_back(locash);

    Concert hunt;
    hunt.setName("Backroad tour");
    hunt.setFriends("Chewbacca");
    hunt.setFriends("Kobe");
    hunt.setFriends("Shaggy");
    hunt.setDesire(4);
    hunt.setDate(3,2,2018);
    concertList.push_back(hunt);

    Concert macklemore;
    macklemore.setName("Thrift Shop Tour");
    macklemore.setFriends("Phil");
    macklemore.setFriends("Gloria");
    macklemore.setFriends("Steve");
    macklemore.setFriends("Brent");
    macklemore.setDesire(10);
    macklemore.setDate(3,18,2018);
    concertList.push_back(macklemore);

    Concert migos;
    migos.setName("Dat Way Tour");
    migos.setFriends("Marshawn");
    migos.setFriends("Reggie");
    migos.setFriends("Peyton");
    migos.setDesire(9);
    migos.setDate(7,13,2018);
    concertList.push_back(migos);

    //Sort the list from earliest to latest concert
    std::sort(concertList.begin(), concertList.end());

    //Print out the contents of each Concert using the overloaded << operator
    for(Concert each: concertList){
        std::cout << each;
    }

}
