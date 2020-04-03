#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NPM;
        string jurusan;

};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "Pandy muhamad";
    data1.NPM = "15118540";
    data1.jurusan = "sistem informasi";

    Mahasiswa data2;
    data2.nama = "Thoriq mahfud";
    data2.NPM = "13406001";
    data2.jurusan = "teknik informatika";

    cout << "nama dari data1: " << data1.nama << endl;
    cout << "NPM dari data1 : " << data1.NPM << endl;
    cout << "jurusan dari data1: " << data1.jurusan << endl;

    cout << "\n" << endl;
    cout << "nama dari data2: " << data2.nama << endl;
    cout << "NPM dari data2 : " << data2.NPM << endl;
    cout << "jurusan dari data2: " << data2.jurusan << endl;

    return 0;
}
