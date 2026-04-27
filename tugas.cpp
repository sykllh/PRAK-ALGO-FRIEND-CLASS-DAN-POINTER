#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang{
    private :
        double d1, d2, s1, s2;
    public :
        double hitungluas(){
            return 0.5 * d1 * d2;
        }

void input(){
        cout << "Masukkan diagonal 1 Layang-Layang : " << endl; 
        cin >> d1;
        cout << "Masukkan diagonal 2 Layang-Layang : "<< endl; 
        cin >> d2;
        cout << "Masukkan sisi 1 Layang-Layang : "<< endl; 
        cin >> s1;
        cout << "Masukkan sisi 2 Layang-Layang : "<< endl; 
        cin >> s2;
        }
        friend void tampilkanKeliling(LayangLayang objLayang, BelahKetupat objBelah);
};