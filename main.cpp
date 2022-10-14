#include <iostream>
#include <string>
#include "Cat.cpp"
#include <vector>
#include <algorithm>    // std::sort

int main() {
  std::vector<Cat> c;
  c.push_back(Cat("Riley","Aapple"));
  c.push_back(Cat("Riley", "Holford"));
  c.push_back(Cat("Zero","Zepplin"));
  c.push_back(Cat("Alpha","Abba"));
  for(int i = 0; i < c.size(); i++){
    std::cout << c[i].firstName <<" " <<c[i].lastName << "\n"; 
  }

  std::cout <<"\n\nSorted: \n\n";
  //this sorts using my operator< function
  std::sort(c.begin(), c.end());
  for(int i = 0; i < c.size(); i++){
    std::cout << c[i].firstName <<" " <<c[i].lastName << "\n";  
  }
  //std::cout << "Hello World!\n";
}