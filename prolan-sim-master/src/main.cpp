#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas sumber makmur" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				int dd, mm, yyyy, tahun_masuk;
				string id, nama, nrp, departemen;

				int n;
				n = recMhs.size() + 1;
				stringstream ss;
				ss << n;
				id = ss.str();


				cout << "masukkan nama ";
				cin.ignore();
				getline(cin, nama);

				cout << "masukkan tanggal lahir : ";
				cin >> dd;

				cout << "masukkan bulan lahir : ";
				cin >> mm;

				cout << "masukktan tahun lahir : ";
				cin >> yyyy;

				cout << "masukkan nrp : ";
				cin >> nrp;

				cout << "masukkan departemen : ";
				cin.ignore();
				getline(cin,departemen);

				cout << "masukkan tahun masuk : ";
				cin >> tahun_masuk;

				mahasiswa mhs(id, nama, dd, mm, yyyy, nrp, departemen, tahun_masuk);
				recMhs.push_back(mhs);
			}
				break;
			case 2:
			{
				int dd, mm, yyyy, pendidikan;
				string id, nama, npp, departemen;

				int n;
				n = recMhs.size() + 1;
				stringstream ss;
				ss << n;
				id = ss.str();


				cout << "masukkan nama ";
				cin.ignore();
				getline(cin, nama);

				cout << "masukkan tanggal lahir : ";
				cin >> dd;

				cout << "masukkan bulan lahir : ";
				cin >> mm;

				cout << "masukktan tahun lahir : ";
				cin >> yyyy;

				cout << "masukkan npp : ";
				cin >> npp;

				cout << "masukkan departemen : ";
				cin.ignore();
				getline(cin,departemen);

				cout << "masukkan pendidikan : ";
				cin >> pendidikan;

				dosen Dosen(id, nama, dd, mm, yyyy, npp, departemen, pendidikan);
				recDosen.push_back(Dosen);
			}
				break;
			case 3:
			{
				int dd, mm, yyyy;
				string id, nama, npp, departemen, unit;

				int n;
				n = recTendik.size() + 1;
				stringstream ss;
				ss << n;
				id = ss.str();


				cout << "masukkan nama ";
				cin.ignore();
				getline(cin, nama);

				cout << "masukkan tanggal lahir : ";
				cin >> dd;

				cout << "masukkan bulan lahir : ";
				cin >> mm;

				cout << "masukktan tahun lahir : ";
				cin >> yyyy;

				cout << "masukkan npp : ";
				cin >> npp;

				cout << "masukkan departemen : ";
				cin.ignore();
				getline(cin,departemen);

				cout << "masukkan unit : ";
				cin.ignore();
				getline(cin,unit);

				tendik Tendik(id, nama, dd, mm, yyyy, npp, unit);
				recTendik.push_back(Tendik);
			}
				break;
			case 4:
			{
				int len = recMhs.size();
				for(int i = 0;i<len;i++){
					cout << i+1 << endl;
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir : " << recMhs[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
				}
			}
				break;
			case 5:
			{
				int len = recDosen.size();
				for(int i = 0;i<len;i++){
					cout << i+1 << endl;
					cout << "Nama Dosen: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir : " << recDosen[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
				}
			}
				break;
			case 6:
			{
				int len = recTendik.size();
				for(int i = 0;i<len;i++){
					cout << i+1 << endl;
					cout << "Nama Dosen: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir : " << recTendik[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
				}
			}
				break;
		}
	}

	return 0;
}
