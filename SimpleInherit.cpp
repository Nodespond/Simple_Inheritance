#include <iostream>
using namespace std;

class Human {
    protected:
      string name;
      bool Genda;      //1 - woman , 0 - man
      unsigned int age;
    public:
        //initialization
        Human() {};
        Human( string Name, unsigned int Age, bool gender) { name = Name; age = Age; Genda = gender; };
};





int main()
{
    Human human1;
    Human human2;
    Human human3;
    
    
    return 0;
}

