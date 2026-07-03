#include <iostream>

int main() {
double venus =  0.91;
double mars  =  0.38;
double uranus =  0.886;
double saturn =  0.93;
double neptune = 1.12;
double jupiter = 2.52;
double mercury = 0.38; 
double planet;
double weight;
double finalweight;
std::cout<<"You have the choice of 7 planets: \n"<< "Mercury - 1\n Venus - 2 \n Mars- 3\n Jupiter - 4\n Saturn - 5\n Uranus - 6\n Neptune - 7\n"<<"Please enter the number of the planet you want to calculate the weight of: ";
std::cin>>planet;
std::cout<<"Enter the weight of the object you want to check the weight of in your planet: ";
std::cin>>weight;
if(planet == 1)planet = mercury;
else if(planet == 2)planet = venus;
else if(planet == 3)planet = mars;
else if(planet == 4)planet = jupiter;
else if(planet == 5)planet = saturn;
else if(planet == 6)planet = uranus;
else if(planet == 7)planet = neptune;
else{
  std::cout<<"ERROR!! enter the right number of your planet.";
  return 1;
};
 finalweight = planet*weight;
 std::cout<<"The weight is: "<<finalweight;
 return 0;
}
