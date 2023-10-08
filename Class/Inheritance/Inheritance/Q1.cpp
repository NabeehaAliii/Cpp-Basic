
// Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
// 1 - function of Mammals by the object of Mammal
// 2 - function of MarineAnimal by the object of MarineAnimal
// 3 - function of BlueWhale by the object of BlueWhale
// 4 - function of each of its parent by the object of BlueWhale


#include<iostream>
using namespace std;

class Mammals{
    public:
    void print_Mammals(){
        cout<<"I am Mammal."<<endl;
    }
};

class MarineAnimals{
    public:
    void print_MarineAnimal(){
        cout<<"I am a Marine Animal."<<endl;
    }
};

class BlueWhale: public Mammals, public MarineAnimals{
    public:
    void print_BlueWhale(){
        cout<<"I belong to both the categories, Mammals and the Marine Animal."<<endl;
    }
};

int main(){
    Mammals Mam;
    Mam.print_Mammals();

    MarineAnimals Ma_An;
    Ma_An.print_MarineAnimal();

    BlueWhale BW; 
    BW.print_BlueWhale();

    BW.print_Mammals();
    BW.print_MarineAnimal();

    return 0;
}