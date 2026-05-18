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

int main()