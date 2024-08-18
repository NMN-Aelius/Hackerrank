#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int age, standard;
        string fn, ln;
    
    public:
    //set
       void set_age(int a)
       {
          age =a;
       }
       void set_standard(int b)
       {
           standard =b;
       }
       void set_first_name(string c)
       {
           fn = c;
       }
       void set_last_name(string d)
       {
          ln = d;
       }
    //get
       int get_age()
       {
           return age;
       }
       int get_standard()
       {
           return standard;
       }
       string get_first_name()
       {
           return fn;
       }
       string get_last_name()
       {
           return ln;
       }
    //merge
       string to_string()
       {
            stringstream ss;
            ss << age << ',' << fn << ',' << ln << ','<< standard; // << add a string, >> read something out
           return ss.str(); // function to get and set string stream object
       }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

// for another way, we can use function to_string to convert a number to  a string with any type.