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

class Mechanic : public  Human {
    private:
        unsigned int MasterValue;
        string Specialization;
    public:
        //init
        Mechanic(string NAME, unsigned int AGE,bool GEND, unsigned int Master, string Spec) {
            Human(NAME, AGE, GEND);
            MasterValue = Master;
            Specialization = Spec;
        }
        //setters
        void setMasterValue(unsigned int a) {
            MasterValue = a;
        }
        void setSpecialise(string Specc) {
            Specialization = Specc;
        }
        //getters
        unsigned int setMasterValue() {
            return MasterValue;
        }
        string setSpecialise() {
            return Specialization;
        }

};



int main()
{
    Human human1;
    Human human2("Vasya",43,0);
    Human human3("Igor",16,1);
    human1.setAge(10);
    human1.setName("Valya");
    human1.setGender(true);
    Mechanic Terentiy("Bob", 34, 0, 4, "Car repair");
    Terentiy.setSpecialise("Car disrepairer");
    Terentiy.setMasterValue(6);
    
    
    return 0;
}

