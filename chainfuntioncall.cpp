#include <iostream>
using namespace std;

class buku {
    string judul;

public:
    buku &setJudul(string judul) {
        this->judul = judul;
        return *this; // chain function: mengembalikan referensi objek
    }

    string getJudul() {
        return this->judul;
    }
};

int main() {
    buku bukunya;

    // Contoh chain function call
    cout << bukunya.setJudul("Ipa").getJudul() << endl;

    return 0;
}
