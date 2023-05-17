#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printALL();
	mahasiswa(string pnama) :nama(pnama) { setID();}
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;

}

void mahasiswa::printALL() {
	cout << "ID =" << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("lia kurnia");
	mahasiswa mhs2("asroni");
	mhs2.nim = 10;
	mahasiswa mhs3("andi kurniawan");
	mhs3.nim = 20;
	mahasiswa mhs4("joko purbo");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();
	return 0;

}