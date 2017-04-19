//Author: Sruthi Viswanthan
//Contact: sruvis@gmail.com
//Purpose: Test for Viagogo UX Designer Graduate position
//To run: Copy and paste the contents in C++ shell. Web address: http://cpp.sh/
//Accomplished: Map range, events, mahattan distance
//Failed: Random seed data


#include <cstdlib>
#include <ctime>
#include <iostream>
#include<string.h>
#include <cmath>
#include <math.h>
using namespace std;
void displayDistance(int distance);

class Event {
   public:
      string name;     // Name of the event
      int id;         // Unique numeric identifier of the event
      int tickets;   // Number of tickets available for the event
      int cost;     // Price of a single ticket for the event
      int xCod;    // Location of the event in the x Coordinate
      int yCod;   // Location of the event in y Coordinate of the event
};

int main()
{
  float xPos, yPos;
 
   Event musicFestival;    // Declare musicFestival of type Event
   Event eplMatch;        // Declare eplMatch of type Event
   
 

   musicFestival.name = "Sunburn" ;    // musicFestival specification
   musicFestival.id =1 ;
   musicFestival.tickets = 375;
   musicFestival.cost = 50;
   musicFestival.xCod = -2;
   musicFestival.yCod = 7;

 
   eplMatch.name = "League game" ;   // eplMatch specification
   eplMatch.id = 2;
   eplMatch.tickets = 200;
   eplMatch.cost = 200;
   eplMatch.xCod = 9;
   eplMatch.yCod = 2;
 
  cout << "Enter the your location(x,y) coordinates: ";   //Receiving user's location as input
  cin >> xPos >> yPos;
 
  if ((xPos > 10) || (xPos< -10))         //Checking whether the input is a number between -10 and +10
  {
        cout << "Enter your location values between +10 and -10" << endl;
  }
 
  else if ((yPos > 10) || (yPos < -10))
  {
        cout << "Enter your location values between +10 and -10" << endl;
  }
 
  else
  {
      int distance1 = abs(xPos-musicFestival.xCod) + abs(yPos-musicFestival.yCod);     //Mahattan distance between the user's location and events
      int distance2 = abs(xPos-eplMatch.xCod) + abs(yPos-eplMatch.yCod);
      
        if (distance1 > distance2)       //Checking the closest event

           {
               int distance = distance2;
               cout << "Closest event to you: EPL Match " << endl;
               cout << "Number of tickets available for the this event:" << eplMatch.tickets << endl;
               cout << "Cost of  a single ticket for this event:" << eplMatch.cost << "$" << endl;
               displayDistance(distance);
           }
           
        else
           {
               int distance = distance1;
               cout << "Closest event to you: Music Festival " << endl;
               cout << "Number of tickets available for the this event:" << musicFestival.tickets << endl;
               cout << "Cost of  a single ticket for this event:" << musicFestival.cost << "$" << endl;
               displayDistance(distance);
           }
  system("pause");  
  return 0;
 
  }
}

void displayDistance(int distance)
{
     cout << "The distance between the you and this event is: " << distance << endl;  //Distance between the user and the closest event
 }
