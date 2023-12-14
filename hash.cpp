#include <iostream>
#define hashTableSlot 10

using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
    char jenisKelamin;
    string programStudi;
    double IPK;
};

Mahasiswa* hashTable[hashTableSlot] = {NULL};

int hashFunction(int nim) {
    return nim % hashTableSlot;
}

void tambahMahasiswa(int NIM, string nama, char jenisKelamin, string programStudi, double IPK) {
    Mahasiswa* mahasiswaBaru = new Mahasiswa;
    mahasiswaBaru->nama = nama;
    mahasiswaBaru->NIM = NIM;
    mahasiswaBaru->jenisKelamin = jenisKelamin;
    mahasiswaBaru->programStudi = programStudi;
    mahasiswaBaru->IPK = IPK;

    int key = hashFunction(NIM);

    hashTable[key] = mahasiswaBaru;
}

void tampilkanMahasiswa(int key) {
    Mahasiswa *dataMahasiswa = hashTable[key];

    cout << "NIM: " << dataMahasiswa->NIM << "\t";
    cout << "Nama: " << dataMahasiswa->nama << "\t";
    cout << "Jenis Kelamin: " << dataMahasiswa->jenisKelamin << "\t";
    cout << "Program Studi: " << dataMahasiswa->programStudi << "\t";
    cout << "IPK: " << dataMahasiswa->IPK << "\t";
    cout << endl;
}

int main() {
    tambahMahasiswa(101, "Nasrul", 'L', "IF", 3.7);
    tambahMahasiswa(102, "Linux", 'L', "IF", 3.2);
    tambahMahasiswa(103, "Nasrulia", 'P', "EL", 2.5);
    tambahMahasiswa(104, "Lina", 'P', "EL", 2.7);
    
    tampilkanMahasiswa(hashFunction(101));
    tampilkanMahasiswa(hashFunction(102));
    tampilkanMahasiswa(hashFunction(103));
    tampilkanMahasiswa(hashFunction(104));
}