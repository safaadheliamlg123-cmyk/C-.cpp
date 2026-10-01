#include <iostream>
using namespace std;
int main() {
  string nama;
    string sekolah;
    string ulang;
    do{
    cout<<"masukkan nama  "<<endl;
    cin>>nama;
    cout<<"masukkan nama sekolahmu  ";
    cin>>sekolah;
    cout<<"namamu adalah  ";
    cout<<nama ;
    cout<<"sekolahmu di  ";
    cout<<sekolah ;
        cout<<"apakah anda mau mengulang tekan y atau y";
        cin>>ulang;
    }
       while(ulang=="y"||ulang=="Y");
    system ("pause");
    return 0;
}
