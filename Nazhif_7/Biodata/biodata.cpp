#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string kelas;
	string umur;
	string hobi;

	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama);

	cout<<"Kelas  : ";
	getline (cin, kelas);

	cout<<"Umur     : ";
	getline (cin, umur);

	cout<<"Hobi : ";
	getline (cin, hobi);

	cout<<endl;
	cout<<"BIODATA"<<endl;
	cout<<"------------------------------"<<endl;

	cout<<"Nama    : "<<nama<<endl;
	cout<<"Umur  : "<<umur<<endl;
	cout<<"Kelas     : "<<kelas<<endl;
	cout<<"Hobi : "<<hobi<<endl;

}
