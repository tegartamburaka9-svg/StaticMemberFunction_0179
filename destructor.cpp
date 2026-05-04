#include <iostream>
using namespace std;

class angka {
private:
    int *arr;
    int panjang;

public:
    angka(int);      // Constructor
    ~angka();     // Destructor
    void cetakData();
    void isiData();
};

//Definisi Constructor
angka::angka(int i) { // Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

// Definisi Destructor
angka::~angka() { // Destructor
    cout << endl;
    cetakData();
    delete[] arr; // Membersihkan alokasi array
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

