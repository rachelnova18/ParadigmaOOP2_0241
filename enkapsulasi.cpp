#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNo[10];

public:
    void setSaklarNo(int i, string value)
    {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i)
    {
        return saklarNo[i];
    }
};

int main()
{
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lamppu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl; // Output: Lampu Teras Rumah
    cout << lampuRumah.getSaklarNo(1) << endl; // Output: Lampu Ruang Tamu
    cout << lampuRumah.getSaklarNo(2) << endl; // Output: Lampu Kamar Tidur
    cout << lampuRumah.getSaklarNo(3) << endl; // Output: Lampu Dapur

    return 0;
}