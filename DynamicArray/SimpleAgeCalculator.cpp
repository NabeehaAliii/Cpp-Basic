#include<iostream>
using namespace std;

void Agecal();

int main(){

    Agecal();
    return 0;
}

void Agecal(){
    int birth_year, birth_month, birth_date,present_year, present_month, present_date;
    int year, month, date;
    cout<<"Enter Your Date of Birth in (YYYY/MM/DD) Format"<<endl;
    cin>> birth_year>>birth_month>>birth_date;

    cout<<"Enter Present Date in (YYYY/MM/DD) Format"<<endl;
    cin>> present_year>>present_month>>present_date;

    if((birth_year>0 || present_year>0) && (birth_month<12 || present_month<12) && (birth_date<31 || present_date<31)){
        if (birth_year<present_year && birth_month<=present_month && birth_date<=present_date){
            year =  present_year - birth_year;
            month =  present_month - birth_month ;
            date = present_date - birth_date ;
        }
        else if(birth_year<present_year && birth_month>present_month && birth_date<=present_date){
            year =  (present_year-1) - birth_year;
            month = (present_month+12) - birth_month;
            date = present_date - birth_date ;
        }
        else if(birth_year<present_year && birth_month>=present_month && birth_date>present_date){
            year =  (present_year-1) - birth_year;
            month = (present_month-1+12) - birth_month;
            date = (present_date+28) - birth_date ;
        }
    } 
    else{
        cout<<"You have Entered Something Wrong.. Try Again"<<endl;
    }

    cout<<"The Curent Age is "<<year<<" years "<<month<<" months and "<<date<< " days."<<endl;
}
