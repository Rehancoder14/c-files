#include <iostream>
using namespace std;

// What virtual class actually does?
// It helps you resolve the ambiguity
// it is mostly used in hierarchial inheritance

class student{ //Base class created
    protected:
        int roll_num;
    public:
        void set_num(int a){
            roll_num = a;
        }
        void print_num(void){
            cout<<"Roll no of the student is "<<roll_num<<endl;
        }
};
class test: virtual public student{ //virtual derived class
    protected:
        int fds, oop;
    public:
        void set_marks(int m1, int m2){ 
            fds = m1;
            oop = m2;
        }
        void get_marks(void){
            cout<<"Your score in fds and oop is "<<fds<<" and "<<oop<<" respectively. "<<endl;
        }
};

class sports :virtual public student{// virtual derived class
    protected:
        int score;
    public:
        void set_score(int x){
            score = x;
        }
        void get_score(void){
            cout<<"Your score in sports is "<<score<<endl;
        }
};
class result : public test,  public sports{ //sub derived class with two derived class
    private:
        int total;
    public:
        
        void display(void){
            total = fds + oop + score; 
            print_num();
            get_marks();
            get_score();
            cout<<"Your total score is "<<total<<endl;
        }

};
int main() {
    result Rehan;
    Rehan.set_num(66);
    Rehan.set_marks(96,97);
    Rehan.set_score(89);
    Rehan.display();

    return 0 ;
}