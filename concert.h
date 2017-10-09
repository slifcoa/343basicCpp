#ifndef concert_H
#define concert_H

#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <algorithm>
#include <iomanip>

//Header file for the concert class
class Concert {

    public:

        //Default Constructor
        Concert();

        //Constructor that takes parameters
        Concert(std::string concertName,std::vector<std::string> friends,int desire, std::tm date);
	
	//Overload comparison operator
	bool operator<(const Concert& other) const;
	
	//Overload << operator signature
	friend std::ostream& operator<<(std::ostream& output, const Concert& printCon);	

	//Accessors
	std::string getName()const;
	std::vector<std::string> getFriends()const;
	int getDesire()const;
	std::tm getDate()const;

	//Setters
	void setName(const  std::string& concertName);
	void setFriends(const std::string& person);
	void setDesire( int desire );
	void setDate ( int month, int day, int year);

	//Prints off all friends in a vector 
	void printFriends(const std::vector<std::string>) const;	

        // Who will be performing?
        std::string concertName;
        //
        // // A list of the people you want
        // // to take with you.  May be empty
        // // or arbitrarily full.
        std::vector<std::string> friends;
        //
        // // A value from 1-10 concerning how
        // // badly you want to see this show.
        int desire;
        //
        // // The date of the show
        // // See http://en.cppreference.com/w/cpp/chrono/c/tm
        std::tm date;

};
#endif
