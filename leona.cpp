// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
string nama;
string sekolah;
string ulang;
    cout<<"masukkan nama   "<<endl;
    cin>>nama;
    cout<<"Masukkan nama sekolahmu   "<<endl;
    cin>>sekolah;
    cout<<"namamu adalah  ";
    cout<<nama <<endl;
    cout<<"sekolahmu di   ";
    cout<<sekolah <<endl;
     cout<<"apakah anda mau mengulang, tekan y jika iya atau Y jika tidak  ";
       cin>>ulang;

 while(ulang=="y"||ulang=="Y");
system("pause");
    return 0;
}
