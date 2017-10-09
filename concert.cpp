//Done By Adam Slifco
//Collaborated with Zachary Hern

#include "concert.h"

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

//Default Constructor
Concert::Concert() {
    //Initialize name
    concertName = "None";
    //Initialize friends
    friends = {};
    //Initialize desire
    desire = 0;
    //Initialize date components
    date.tm_mday = 0;
    date.tm_mon = 0;
    date.tm_year = 0;
}

//Constructor that takes parameters
Concert::Concert(std::string cName, std::vector<std::string> friends, int desire, std::tm date){
    this->concertName = cName;
    this->friends = friends;
    this->desire = desire;
    this->date = date;
}

//Get concert name
std::string Concert::getName() const{
    return concertName;
}

//Get friends
std::vector<std::string> Concert::getFriends() const{
    return friends;
}

//Get concert desire
int Concert::getDesire() const{
    return desire;
}

//Get date
std::tm Concert::getDate() const{
    return date;
}

//Set concert name
void Concert::setName(const std::string& concertName){
    this->concertName = concertName;
}

//Set friends
void Concert::setFriends(const std::string& person){
    this->friends.push_back(person);
}

//Set desire
void Concert::setDesire (int desire){
    this->desire = desire;
}

//Set date
void Concert::setDate ( int month, int day, int year ) {
    this->date.tm_mon = month;
    this->date.tm_mday = day;
    this->date.tm_year = year;
}

//Print the vector of friends
void Concert::printFriends(const std::vector<std::string> partygoers) const {

    //prints out each friend going to the associated concert
    for (int i = 0; i < partygoers.size(); i++) {
        std::cout << " " <<  partygoers[i];
    }
     std::cout << "." << std::endl;
} 
//Overload < operator to sort Concerts
bool Concert::operator<(const Concert& other) const {

    //Instance variables to sort by date and desire
    bool yLess = this->getDate().tm_year < other.getDate().tm_year;
    bool mLess = this->getDate().tm_mon < other.getDate().tm_mon;
    bool dLess = this->getDate().tm_mday < this->getDate().tm_mday;
    bool desGreat = this->getDesire() > other.getDesire();
    bool yEqual = this->getDate().tm_year == other.getDate().tm_year;
    bool mEqual = this->getDate().tm_mon == other.getDate().tm_mon;
    bool dEqual = this->getDate().tm_mday == other.getDate().tm_mday;

    //if this is a earlier year than other
    if(yLess){
        return true;

    //if this is a earlier month in the same year
    } else if ((mLess) && (yEqual)) {
	return true;

    //if this is a earlier day in the same month and year
    } else if ((dLess) && (yEqual) && (mEqual)){
	return true;

    //if this is a higher desire on the exact same day
    } else if ((desGreat) && (dEqual) && (yEqual) && (mEqual)){
	return true; 

    //if this is a later date
    } else {
	return false; 
    }
}

//Overloaded to print out all the contents of Concerts
std::ostream& operator<<(std::ostream& output, const Concert& printCon) {

    //prints the concert name and date	
    output << "The " << printCon.getName() << " is coming to town on "
    << printCon.getDate().tm_mon << "/" << printCon.getDate().tm_mday
    << "/" << printCon.getDate().tm_year << " with"; 

    //prints the friends associated with the concert	
    printCon.printFriends(printCon.getFriends());
    return output;  
}
