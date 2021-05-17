#include <iostream>
#include <time.h>
#include "Cube.hpp"

using namespace std;



int main(){

try{

    Rooms r1;
    cout << "Room Color and Rooms" << endl;
    cin >> r1;
    cout << r1 << endl;

    cout << "Compare:" << endl;
    Rooms r2;
    r2.setColour("Red");
    string  compare = r1 == r2;
    cout << compare << " " <<endl;

    r1++;
    cout << r1 << endl;

    --r1;
    cout << r1 << endl;

}

catch(invalid_argumant &error)
{ 
  cout <<error.what() << endl;
}
catch ( ... )
{
  cout << " unknown happened" << endl;
}
return 0;
}
