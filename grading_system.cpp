#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int phone_no;

public:
    int arr[5];
    void input_details()
    {
        cout << "enter the name and phone number of student:";
        cin >> name >> phone_no;
    }
    void input_marks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "enter the marks for " << i + 1 << " subject:";
            cin >> arr[i];
        }
    }

    void display_marks()
    {
        int max = 0, min = arr[0];
        cout << "array of marks in all 5 subjects is: { ";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << " }" << endl;
        cout << "maximum marks of " << name << " is:" << max << endl;
        cout << "minimum marks of " << name << " is:" << min << endl;
    }

    void display_grades()
    {
        int t = 0;
        char g;
        for (int i = 0; i < 5; i++)
        {
            t = t + arr[i];
        }
        int p = t / 5;
        cout << "the percentage is:" << p << endl;
        if (p >= 95)
        {
            cout << "grade is A+" << endl;
        }
        else if (p >= 90 || p < 95)
        {
            cout << "grade is A" << endl;
        }
        else if (p >= 85 || p < 90)
        {
            cout << "grade is B+" << endl;
        }
        else if (p >= 80 || p < 85)
        {
            cout << "grade is B" << endl;
        }
        else if (p >= 75 || p < 80)
        {
            cout << "grade is C+" << endl;
        }
        else if (p >= 70 || p < 75)
        {
            cout << "grade is C+" << endl;
        }
        else if (p >= 60 || p < 70)
        {
            cout << "PASSED WITH 1ST DIVISON(60%=>)" << endl;
        }
        else if (p < 33)
        {
            cout << "FAILED" << endl;
        }
    }

} arr[5];

int main()
{
    int arr[5];
    student obj1;
    obj1.input_details();
    obj1.input_marks();
    obj1.display_marks();
    obj1.display_grades();
}