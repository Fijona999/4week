#include <iostream>
#include <vector>
#include <string>
#include <Rooms.h>

namespace gl;

int Rooms::idCount = 0;

 Rooms
 {
    string colour;
    vector<string> rooms;
    int ID;
    Rooms()
    {}
    ~Rooms()
    {}
    void setColour(string input)
    {
        colour = input;
    }
    string getColour() { return colour; }

    void addRooms(string input)
    {
        rooms.push_back(input);
    }
    void printRooms()
    {
        cout << colour << " ";
        for (int i = 0; i < rooms.size(); ++i)
        {
            cout << rooms[i]<<" ";
        }

        cout << endl;
    }
    
    bool Rooms::operator!=(const Rooms &other) const{
      if(colour==other.colour){
        return true;
        }else{
          return false;
          }
         }
         
     bool Rooms::operator!=(const Rooms &other) const{
    return !(*this == other);
}

    bool Rooms::operator>(const Rooms &other) const{
    if(colour > other.colour){
        return true;
    }else{
        return false;
    }
}

   bool Rooms::operator<(const Rooms &other) const{
    return other > *this;
}

   bool Rooms::operator>=(const Rooms &other) const{
    if(*this ==other){
        return true;
    }else{
        return *this > other;
    }
}

   bool Rooms::operator<=(const Rooms &other) const{
    if(*this ==other){
        return true;
    }else{
        return *this < other;
    }
}

  Rooms operator++(){
    ++colour;
    return *this;
}

 Rooms operator++(int){
    Rooms temp = *this;
    ++colour;
    return temp;
}

  Rooms operator--(){
    --colour;
    return *this;
}

   Rooms operator--(int){
    Rooms temp = *this;
    --colour;
    return temp;
}    

  istream& operator >> (istream &is, Rooms &is_Rooms){
   string t_colour;
   int temp_Rooms;
  
  is >> temp_colour >> temp_Rooms;
  is_Rooms.Rooms(temp_colour, temp_Rooms);
  
  return is;
  }

   ostream& operator<<(ostream &os, const Rooms &os_Rooms){
    os << os_Rooms.colour;
    return os;
    }
    
    bool Rooms(string colour){
     if(colour>=0){
        return true;
      }else{
        return false;
 }
}
    
};
