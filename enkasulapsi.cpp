#include <iostream>

using namespace std;

class remotelampu{

    private:
    string saklarno[5];
    public:
    void setSaklarno(int i,string value){
        saklarno[i] = value;
    }

    string getSaklarno(int i){
        return saklarno[i];
    }
};

int main(){
    remotelampu lampu;

    lampu.setSaklarno(0,"Lampu Teras Rumah");
    lampu.setSaklarno(1,"Lampu Ruang Tamu");
    lampu.setSaklarno(2,"Lampu Kamar Tidur");
    lampu.setSaklarno(3,"Lampu Dapur");

    cout << lampu.getSaklarno(0) << endl;
    cout << lampu.getSaklarno(1) << endl;
    cout << lampu.getSaklarno(2) << endl;
    cout << lampu.getSaklarno(3) << endl;
}