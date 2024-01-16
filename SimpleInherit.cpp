#include <iostream>
using namespace std;

class Move {
    public:
        virtual void MoveHead() {
            cout << "Покрутил головой...\n";
        }

        virtual void HRU() {
            cout << " Хрю-Хрю, я свинотыш\n";
        }

        virtual void SayWord() {
            cout << "Hey!!\n";
        }

};

class Human: public Move {
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
        Mechanic(){};
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

    void HRU() {
       
        cout << "WHY" << endl;
   }

    void SayWord() {
        cout << "GAIKA!" << endl;
   }


};

class Stazhor : public Mechanic, public Human {
    private:
        unsigned int ErrorCount;
    public:
        Stazhor(string NAME_ , unsigned int AGE_, bool GEND_, unsigned int Err){
            Mechanic(NAME_, AGE_, GEND_, 0, "Loser repairer");
            ErrorCount = Err;
        };


};

class Director : public Human, public Move {
    private:
        int rep;
    public:
        Director(string NAM, unsigned int ag, bool gnd) {
            Human(NAM, ag, gnd);
        }

void HRU() {
    cout << "WHREEEEEEEEE" << endl;
}

void SayWord() {
  
    cout << "Da ponabiraut do....na work" << endl;
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
    Director MAIN_SHISHKA("Yaggi", 23, 1);
    Stazhor Me("LOX", 22, 0, 100);
    MAIN_SHISHKA.setGender(0);
    
    MAIN_SHISHKA.setName("BUGGY");
    cout << MAIN_SHISHKA.getName() << endl;
    MAIN_SHISHKA.SayWord();
    Me.SayWord();
    Terentiy.SayWord();
    human1.SayWord();
    
    Me.setName("HUUU?");
    cout << Me.getName();
    
    return 0;
}

