#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int);// construktor 
    ~angka(); // Destruktor 
    void cetakData();
    void isiData();
};
// Definisi Member function 
angka::angka(int i) {// construktor
    panjang = i;
    arr = new int[i];
    isiData();
}

