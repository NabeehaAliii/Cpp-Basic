#include<iostream>
using namespace std;


void buildrectangle(int r, int c){

    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}



void hollowRectangle(int r,int c){
    for(int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (i==0 || i==(r-1) || j==0 || j==(c-1))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }

}

int main(){
    int r, c;
    cout<<"Enter Rows and Columns: "<<endl;
    cin>> r >> c;

    buildrectangle(r,c);
    cout<<"\n\n \t HOllow rectangle\n";
    hollowRectangle(r,c);
    return 0;
}