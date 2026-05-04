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

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main() {
    // Objek lokal (stack) - Destructor otomatis dipanggil di akhir scope
    angka belajarcpp(3); // Constructor Dipanggil

    // Objek dinamis (heap) - Destructor dipanggil saat keyword delete digunakan
    angka *ptrBelajarcpp = new angka(5); // Constructor Dipanggil
    delete ptrBelajarcpp; // Destructor Dipanggil

    return 0;
}