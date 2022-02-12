#include <iostream>
using namespace std;

class base1 {
    protected : 
        int roll_num;
    public:
        void set_roll(int);
        void get_roll(void);
};
void base1 :: set_roll(int r){
    roll_num = r;
}
void base1 :: get_roll(void){
    cout<<"The roll no of the student is "<<roll_num<<endl;

}

class base2 {
    protected:
        int fds_marks, oop_marks;
    public:
        void set_marks(int, int  );
        void get_marks(void);
};
void base2 :: set_marks(int a , int b ){
    fds_marks = a;
    oop_marks = b;
}
void base2 :: get_marks(void){
    
    cout<<"Your score in  'object oriented programming' is "<<oop_marks<<endl;

}


class derived : public base1, public base2{
    float percentage;
    public:
        void display(void){
            get_roll();
            get_marks();
            cout<<"Your percentage is "<<(fds_marks+oop_marks)/2<<endl;
        }

};

int main() {
    derived Rehan;
    Rehan.set_roll(66);
    Rehan.set_marks(98,99);
    Rehan.display();
    

    return 0 ;
}