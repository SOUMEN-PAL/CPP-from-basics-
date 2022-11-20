#include <iostream>
using namespace std;

class students{
    protected:
    string name;
    int roll_no;
    int Grade;

    void set_data(){
        cout<<"Enter your Name,Rollno and Grade"<<endl;
        cin>>name>>roll_no>>Grade;
    }

    void get_data(){
        cout<<"The name is "<<name<<endl<<
        "His roll no is "<<roll_no<<endl<<
        "and his Grade is "<<Grade<<endl;
    }
};

class Test : virtual public students{
    protected:
    float marks;
    public:
    void set_marks(){
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void get_marks(){
        cout<<"his marks is "<<marks<<endl;
    }

};

class Sports : virtual public students{
    protected:
    string sports;
    public:
    void know_sports(){
        cout<<"What you play: ";
        cin>>sports;

    }
    void get_sports(){
        cout<<name<<" Plays "<<sports<<endl;
    }

};


class Result : public Test,public Sports{
    int a=90;
    public:
    void display(){
        set_data();
        set_marks();
        know_sports();
        get_data();
        get_marks();
        get_sports();
       
    }
};



int main(){
    
  
    Result Harry;
    Harry.display();
    
    return 0;
}