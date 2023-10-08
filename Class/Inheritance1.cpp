#include<iostream>
using namespace std;

// Parent Class
class Vehicle{
    private:
    int wheel;

    protected:
    string type;
    
    public:
    string name;

    //setter
    void setwheel(int x){
        wheel = x;
    }
    // getter
    int getwheel(){
        return wheel;
    }

    void display(){
        cout<<"Wheels: "<<wheel<<endl;
        cout<<"Type: "<<type<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

// child Class
class car:public Vehicle{
    // Every thing is Accessible execpt Private data.
    private:
    bool automatic;

    public:
    // Setter>>>> Was Protected in parent class, so it is accesible in child calss.
    void settype(string t){
        type = t;
    }
    // getter
    string gettype(){
        return type;
    }


};

int main(){
    car c;
    c.setwheel(4);
    c.settype("A");
    int n_wheel =  c.getwheel();
    string g_type = c.gettype();

    cout<<"Wheel Using Get Function: "<<n_wheel<<endl;
    cout<<"Type Using Get Function: "<<g_type<<endl;

    c.name = "Ford";
    cout<<"Display USing Display Function: "<<endl;
    c.display();

    return 0;
}