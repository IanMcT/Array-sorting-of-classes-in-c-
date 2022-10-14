#include <string>
class Cat {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    std::string firstName;  // Attribute (string variable)
    std::string lastName;
Cat(std::string f, std::string L){
  this->firstName = f;
  this->lastName = L;
}

//This function is required for sorting
bool operator<(const Cat& other)
{
    if(this->firstName<other.firstName){
      return true;
    }
  return false;
}
};