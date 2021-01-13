#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
        int a, s;
        string f, l;
        
        void set_age(int age){
            a = age;
        }
        
        int get_age(){
            return a;
        }
        
        void set_first_name(string first_name){
            f = first_name;
        }
        
        string get_first_name(){
            return f;
        }
        
        void set_last_name(string last_name){
            l = last_name;
        }
        
        string get_last_name(){
            return l;
        }
        
        void set_standard(int standard){
            s = standard;
        }
        
        int get_standard(){
            return s;
        }
        
        string to_string(){
            stringstream ss;
            //Inserting elements in ss
            ss<<a<<","<<f<<","<<l<<","<<s;
            return ss.str(); //str() is used to get or set the stream content.
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
