#include <iostream>
using namespace std;

class AbstraksiKlas
{
private:
    string x, y;

public:
    // method untuk mengisi nilai x dan y
    //  private member
    void setXY(string a, string b)
    {
        x = a;
        y = b;
    }
    // menampilkan nilai
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    AbstraksiKlas ak;
    ak.setXY("Yogyakarta", "Kampus"); // mengisi nilai x dan y
    ak.display();                     // menampilkan nilai x dan y

    return 0;
}