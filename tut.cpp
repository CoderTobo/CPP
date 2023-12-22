#include <iostream>
using namespace std;
class person
{
    string Age;
    string Name;
    string Address;

public:
    void input()
    {
        cout << "Enter Age:";
        cin >> Age;
        cout << "Enter Name:";
        cin >> Name;
        cout << "Enter Address:";
        cin >> Address;
    }
    void show()
    {
        cout << "Age:" << Age << endl;
        cout << "Name:" << Name << endl;
        cout << "Address:" << Address << endl;
    }
};
int main()
{
    person tobo,rishu,vishal;
    tobo.input();
    tobo.show();

    rishu.input();
    rishu.show();

    vishal.input();
    vishal.show();

}
