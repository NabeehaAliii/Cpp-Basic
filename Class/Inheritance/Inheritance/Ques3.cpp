// We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.

// #include <iostream>
// #include <string>
// using namespace std;

// class Marks
// {
// protected:
//     static int next_roll_num;
//     int roll_num;
//     string name;
//     float marks;

// public:
//     Marks(){};      // Default Constr.
//     Marks(string n, float m) : name(n), marks(m)
//     {
//         roll_num = next_roll_num;
//         next_roll_num++;
//     }
//     void print_details()
//     {
//         cout << "Roll Number: " << roll_num << endl;
//         cout << "Name: " << name << endl;
//         cout << "Pysics Marks: " << marks << endl;
//         cout << "Chemistry Marks: " << marks << endl;
//         cout << "Math Marks: " << marks << endl;
//     }
// };

// class Physics : public Marks
// {
// public:
//     Physics(string n, float m) : Marks(n, m) {}
// };

// class Chemistry : public Marks
// {
// public:
//     Chemistry(string n, float m) : Marks(n, m) {}
// };

// class Mathematics : public Marks
// {
// public:
//     Mathematics(string n, float m) : Marks(n, m) {}
// };

// int Marks::next_roll_num = 1;
// // This variable can be accessed using the scope resolution operator :: with the class name Marks, like Marks::next_roll_num.
// int main()
// {
//     int num_students;
//     float p_marks, c_marks, m_marks;
//     string name;

//     cout << "Enter the number of students: ";
//     cin >> num_students;
//     for (int i = 0; i < num_students; i++)
//     {
//         cout << "Enter the name of the student " << i + 1 << ": ";
//         cin >> name;

//         cout << "Enter the marks in Physics: ";
//         cin >> p_marks;
//         Physics p(name, p_marks);

//         cout << "Enter the marks in Chemistry: ";
//         cin >> c_marks;
//         Chemistry c(name, c_marks);

//         cout << "Enter the marks in Mathematics: ";
//         cin >> m_marks;
//         Mathematics math(name, m_marks);

//         Marks m(name, (p_marks + c_marks + m_marks) / 3.0);
//         cout << "Details of the student:\n";
//         m.print_details();
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

class Marks {
    static int roll_number;  // class variable to generate roll number automatically
public:
    int student_roll_number;
    char student_name[40];
    int physics_marks, chemistry_marks, maths_marks;

    Marks(char* name, int physics, int chemistry, int maths) {
        student_roll_number = ++roll_number;
        strncpy(this->student_name, name, sizeof(this->student_name));          // strncpy(Destination, Source, Size)
        physics_marks = physics;
        chemistry_marks = chemistry;
        maths_marks = maths;
    }
};

int Marks::roll_number = 0;

class Physics : public Marks {
public:
    Physics(char* name, int marks) : Marks(name, marks, 0, 0) {}
};

class Chemistry : public Marks {
public:
    Chemistry(char* name, int marks) : Marks(name, 0, marks, 0) {}
};

class Mathematics : public Marks {
public:
    Mathematics(char* name, int marks) : Marks(name, 0, 0, marks) {}
};

    int static total_physics = 0, total_chemistry = 0, total_maths = 0;
int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    
    // Input marks of each student and create corresponding objects
    for(int i=0; i<num_students; i++) {
        char name[40];
        int physics, chemistry, maths;
        
        cout << "Enter name of student " << i+1 << ": ";
        cin>>name;
        strncpy(name, name, sizeof(name));        // strncpy(destination, source, size)
        cout << "Enter marks in Physics: ";
        cin >> physics;
        cout << "Enter marks in Chemistry: ";
        cin >> chemistry;
        cout << "Enter marks in Mathematics: ";
        cin >> maths;
        
        Physics p(name, physics);
        Chemistry c(name,chemistry);
        Mathematics m(name, maths);

   
        total_physics += p.physics_marks;
        total_chemistry += c.chemistry_marks;
        total_maths += m.maths_marks;

    // Calculate total and average marks for each subject and for the class
    }
    
    
    double avg_physics = (double) total_physics / num_students;
    double avg_chemistry = (double) total_chemistry / num_students;
    double avg_maths = (double) total_maths / num_students;

    cout<<"Total Marks of Class\n"<<endl;
    cout << "Total marks in Physics: " << total_physics << endl;
    cout << "Total marks in Chemistry: " << total_chemistry << endl;
    cout << "Total marks in Mathematics: " << total_maths << endl;

    cout<<"\n\nAverage Marks of class\n"<<endl;
    cout << "Average marks of class in Physics: " << avg_physics << endl;
    cout << "Average marks of class in Chemistry: " << avg_chemistry << endl;
    cout << "Average marks of class in Mathematics: " << avg_maths << endl;
    
    return 0;
}
