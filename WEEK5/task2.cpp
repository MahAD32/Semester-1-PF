#include <iostream>
#include <cmath>
using namespace std;
string pyramidVolume(  float length,   float width,  float height, string unit);
main()
{
        float length, volume, height;
      string unit;
      string result = pyramidVolume(length, volume, height, unit);
      cout<<result;
}
string pyramidVolume(  float length,  float width,   float height, string unit)
{

      cout << "Enter the length of the pyramid (in meters): ";
      cin >> length;
      cout << "Enter the width of the pyramid (in meters): ";
      cin >> width;
      cout << "Enter the height of the pyramid (in meters): ";
      cin >> height;
      cout << "Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
      cin >> unit;
      float volume = (length * width * height) / 3;
      if (unit == "meters")
      {     volume = volume;
            return "The volume of the pyramid is " + to_string(volume) + " cubic meters";
      }
      if (unit == "kilometers")
       {volume = volume/1000000;
      return "The volume of the pyramid is " + to_string(volume) + " cubic meters";
}
      if (unit == "millimeters")
      {     volume = volume*1000000000;
            return "The volume of the pyramid is " + to_string(volume) + " cubic meters";
      }
  if (unit == "centimeters")
      {     volume = volume*100000;
            return "The volume of the pyramid is " + to_string(volume) + " cubic meters";
      }
}