#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shoNim(){
        cout << "No Induk = "<<nim<<endl;
    }

};

int main(){
    
    mahasiswa mhs{1};
}