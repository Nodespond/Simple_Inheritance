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
        //getters
        string getName() { return name; };
        unsigned int getAge() { return age; };
        bool getGender() { return Genda; };
        //setters
        void setName(string NAME) { name = NAME; };
        void setAge(unsigned int AGE) { age = AGE; };
        void setGender(bool GENDA) { Genda = GENDA; };

};





int main()
{
    Human human1;
    Human human2;
    Human human3;
    
    
    return 0;
}

