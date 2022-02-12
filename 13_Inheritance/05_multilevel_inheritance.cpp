// multilevel inheritance
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_numbers;

public:
    void set_numbers(int);
    void get_numbers(void);
};
void student ::set_numbers(int r)
{
    roll_numbers = r;
}
void student ::get_numbers(void)
{
    cout << "The roll no of student is " << roll_numbers << endl;
}

class exam : public student
{
protected:
    float physics;
    float maths;
    float chemistry;

public:
    void set_marks(float, float, float);
    void get_marks();
};
void exam ::set_marks(float a, float b, float c)
{
    physics = a;
    maths = b;
    chemistry = c;
}
void exam ::get_marks(void)
{
    cout << "Your score in physics is " << physics << endl;
    cout << "Your score in maths is " << maths << endl;
    cout << "Your score in chemistry is " << chemistry << endl;
}
class percentage : public exam
{
    float percent;

public:
    void display(void)
    {
        get_numbers();
        get_marks();
        cout << "Your percentage is " << (physics + maths + chemistry) / 3 << " % ." << endl;
    }
};

int main()
{

    percentage Rehan;
    Rehan.set_numbers(66);
    Rehan.set_marks(90, 95, 98);
    Rehan.display();

    return 0;
}