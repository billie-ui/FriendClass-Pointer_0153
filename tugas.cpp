#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang

{
    private:
        float d1, d2;
        float sisi1, sisi2;
    public:
        void input();
        float Luas();
        float Keliling();
        void output();
        
        // Friend function declaration
        friend class BelahKetupat;
};

class BelahKetupat
{
    private:
        float d1, d2;
        float sisi;
    public:
        void input();
        float Luas();
        float Keliling();
        void output();
        
        // Friend function untuk menghitung keliling dari LayangLayang
        float kelilingFriend(LayangLayang L);
};

void LayangLayang::input()
{
    cout << "\n=== Input Layang-Layang ===" << endl;
    cout << "Masukkan diagonal 1: ";
    cin >> d1;
    cout << "Masukkan diagonal 2: ";
    cin >> d2;
    cout << "Masukkan sisi 1: ";
    cin >> sisi1;
    cout << "Masukkan sisi 2: ";
    cin >> sisi2;
}

