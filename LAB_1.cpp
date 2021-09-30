#include <iostream>
#include <Windows.h>
using namespace std;


bool bAnd(bool const b1, bool const b2)
{
    if (b1 == false  && b2 == false ) return false;
    else return true;
}

bool bImpl(bool const b1, bool const b2)
{
    if (b1 == true && b2 == false) return false;
    else return true;
}

const char* GetBoolString(bool const b)
{
    return b ? "T" : "F";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string expression;

    expression = "x-> ((x||y)||z)";

    cout << "Expression: " << expression << endl;
    cout << "Steps: " << endl;

    bool v1;
    bool v2;
    bool v3;
    bool v4;
    bool v5;
    bool v6;
    bool v7;

    cout << "1| x||y" << endl;
    cout << "2| (x||y)||z" << endl;
    cout << "3| x-> ((x||y)||z)" << endl;


    for (size_t x = 0; x < 2; x++)
    {
        for (size_t y = 0; y < 2; y++)
        {
            for (size_t z = 0; z < 2; z++)
            {
                cout << x << " ";
                cout << y << " ";
                cout << z << "  ";

                cout << "|";
                v1 = bAnd(x, y); cout << v1 << "|";
                v2 = bAnd(v1, z); cout << v2 << "|";
                v3 = bImpl(x, v2); cout << v3 << "|";
               
                cout << endl;
            }
        }
    }

    cout << endl;
    system("pause");

    return 0;
}