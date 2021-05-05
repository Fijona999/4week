#ifndef ROOMS_H
#define ROOMS_H
#include <stdexcept>

namespace gl{
           class Rooms {
               public:
                     string colour;
                     vector<string> Rooms;
		     int ID;
                     Rooms()
                     ~Rooms()
                     void setColour(string input)
                     string getColour() 
                     void addRooms(string input)
                     void printRooms()
  
                     bool operator==(const  Rooms&) const;
                     bool operator!=(const  Rooms&) const;
                     bool operator>(const  Rooms&) const;
                     bool operator<(const  Rooms&) const;
                     bool operator>=(const  Rooms&) const;
                     bool operator<=(const  Rooms&) const; 
             
                     Rooms operator++();
                     Rooms operator++(int);
                     Rooms operator--();
                     Rooms operator--(int);
             
                     friend ostream &operator<<(ostream&, const Rooms&);
                     friend istream &operator>>(istream&, Rooms&);
	  }
  };
	
#endif
