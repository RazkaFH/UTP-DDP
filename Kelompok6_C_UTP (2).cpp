#include <iostream>

using namespace std;

int main() {
  char kodepesawat, A, B, C, a, b, c, kembali, Y, y, N, n;
  int jumlah, rute, tanggalwaktu;
  float ppn;
  double hargatiket, totalharga;

  cout << "\n    ________________________________________________________";
  cout << "\n   |                     DDP AIRLINES                       |";
  cout << "\n   |========================================================|";
  cout << "\n   |                  Reservation Ticket                    |";
  cout << "\n   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
  cout << "\n   |  NO. |              Plane Route                        |";
  cout << "\n   |________________________________________________________|";
  cout << "\n   |  1.  |            Lampung-Jakarta                      |";
  cout << "\n   |--------------------------------------------------------|";
  cout << "\n   |  2.  |           Jakarta-Singapore                     |";
  cout << "\n   |--------------------------------------------------------|";
  cout << "\n   |  3.  |             Jakarta-Bali                        |";
  cout << "\n   |--------------------------------------------------------|";
  cout << "\n   |  4.  |          Yogyakarta-Sulawesi                    |";
  cout << "\n   |--------------------------------------------------------|";
  cout << "\n   |  5.  |          Kalimantan-Palembang                   |";
  cout << "\n   |________________________________________________________|\n\n";
  cout << " Silahkan pilih rute perjalanan anda (1/2/3/4/5)	:	";
  cin >> rute;

  void cetakrute(int rute);

  if (rute == 1) {
    cout << "   +===================================================+\n";
    cout << "   |                   Lampung-Jakarta                 |\n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "   | NO. |       Tanggal        |         Pukul        |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  1. |     12 Maret 2050    |       12.50 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  2. |   32 Desember 2045   |       16.40 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  3. |   30 Februari 3000   |       07.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  4. |   23 Oktober 2045    |       09.35 WIB      |\n";
    cout << "   +===================================================+\n";
    cout << "   Silahkan pilih tanggal dan waktu yang tersedia\n";
    cout << "   Silahkan ketik nomor pilihan anda	(1/2/3/4):	";
    cin >> tanggalwaktu;
    cout << endl;
    cout << "Silahkan pilih tipe kursi pesawat\n";
    cout << "   +=========================================+ \n";
    cout << "   |           Tipe Kursi Pesawat            | \n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
    cout << "   |  A. |           First Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  B. |          Bisnis Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  C. |         Ekonomi Class             | \n";
    cout << "   +=========================================+ \n";
    cout << "   Masukkan kode kelas pesawat (A/B/C)	:	";
    cin >> kodepesawat;
    if (kodepesawat == 'A' || kodepesawat == 'a') {
      cout << "   harga tiket pesawat first class anda	: Rp5.000.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 5 * jumlah;
      cout << "	total harga	= 	" << hargatiket << "jt + ppn\n";
      ppn = 5 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'B' || kodepesawat == 'b') {
      cout << "   harga tiket pesawat bisnis class anda	: Rp2.200.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 2.2 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 2.2 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'C' || kodepesawat == 'c') {
      cout << "   harga tiket pesawat ekonomi class anda	: Rp950.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 0.950 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 0.95 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    }

  } else if (rute == 2) {
    cout << "   +===================================================+\n";
    cout << "   |                  Jakarta-Singapore                |\n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "   | NO. |       Tanggal        |         Pukul        |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  1. |     24 Juni 2050     |       12.20 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  2. |   30 Desember 2045   |       18.40 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  3. |   21 Januari 2100    |       10.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  4. |   23 Oktober 2045    |       06.30 WIB      |\n";
    cout << "   +===================================================+\n";
    cout << "   Silahkan pilih tanggal dan waktu yang tersedia\n";
    cout << "   Silahkan ketik nomor pilihan anda	(1/2/3/4):	";
    cin >> tanggalwaktu;
    cout << endl;
    cout << "Silahkan pilih tipe kursi pesawat\n";
    cout << "   +=========================================+ \n";
    cout << "   |           Tipe Kursi Pesawat            | \n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
    cout << "   |  A. |           First Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  B. |          Bisnis Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  C. |         Ekonomi Class             | \n";
    cout << "   +=========================================+ \n";
    cout << "Masukkan kode kelas pesawat (A/B/C)	:	";
    cin >> kodepesawat;
    if (kodepesawat == 'A' || kodepesawat == 'a') {
      cout << "   harga tiket pesawat first class anda	: Rp20.000.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 20 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 20 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'B' || kodepesawat == 'b') {
      cout << "   harga tiket pesawat bisnis class anda	: Rp15.300.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 15.3 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 15.3 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'C' || kodepesawat == 'c') {
      cout << "   harga tiket pesawat ekonomi class anda	: Rp10.000.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 10 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 10 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    }

  } else if (rute == 3) {
    cout << "   +===================================================+\n";
    cout << "   |                     Jakarta-Bali                  |\n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "   | NO. |       Tanggal        |         Pukul        |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  1. |     15 Maret 2050    |       15.50 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  2. |   14 September 2023  |       12.40 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  3. |      30 Mei 3000     |       04.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  4. |   29 Oktober 2045    |       09.55 WIB      |\n";
    cout << "   +===================================================+\n";
    cout << "   Silahkan pilih tanggal dan waktu yang tersedia\n";
    cout << "   Silahkan ketik nomor pilihan anda	(1/2/3/4):	";
    cin >> tanggalwaktu;
    cout << endl;
    cout << "Silahkan pilih tipe kursi pesawat\n";
    cout << "   +=========================================+ \n";
    cout << "   |           Tipe Kursi Pesawat            | \n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
    cout << "   |  A. |           First Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  B. |          Bisnis Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  C. |         Ekonomi Class             | \n";
    cout << "   +=========================================+ \n";
    cout << "Masukkan kode kelas pesawat (A/B/C)	:	";
    cin >> kodepesawat;
    if (kodepesawat == 'A' || kodepesawat == 'a') {
      cout << "   harga tiket pesawat first class anda	: Rp21.300.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 21.3 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 21.3 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'B' || kodepesawat == 'b') {
      cout << "   harga tiket pesawat bisnis class anda	: Rp16.200.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 16.2 * jumlah;
      cout << "	total harga	= 	" << hargatiket << "jt + ppn\n";
      ppn = 16.2 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'C' || kodepesawat == 'c') {
      cout << "   harga tiket pesawat ekonomi class anda	: Rp10.000.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 10 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 10 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    }
  } else if (rute == 4) {
    cout << "   +===================================================+\n";
    cout << "   |                 Yogyakarta-Sulawesi               |\n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "   | NO. |       Tanggal        |         Pukul        |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  1. |     29 April 2050    |       13.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  2. |    17 Agustus 1945   |       04.40 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  3. |   02 Februari 2200   |       06.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  4. |   16 November 2045   |       10.30 WIB      |\n";
    cout << "   +===================================================+\n";
    cout << "   Silahkan pilih tanggal dan waktu yang tersedia\n";
    cout << "   Silahkan ketik nomor pilihan anda	(1/2/3/4):	";
    cin >> tanggalwaktu;
    cout << endl;
    cout << "Silahkan pilih tipe kursi pesawat\n";
    cout << "   +=========================================+ \n";
    cout << "   |           Tipe Kursi Pesawat            | \n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
    cout << "   |  A. |           First Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  B. |          Bisnis Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  C. |         Ekonomi Class             | \n";
    cout << "   +=========================================+ \n";
    cout << "Masukkan kode kelas pesawat (A/B/C)	:	";
    cin >> kodepesawat;
    if (kodepesawat == 'A' || kodepesawat == 'a') {
      cout << "   harga tiket pesawat first class anda	: Rp25.000.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 25 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 25000000 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'B' || kodepesawat == 'b') {
      cout << "   harga tiket pesawat bisnis class anda	: Rp13.900.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 13.9 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 13.9 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'C' || kodepesawat == 'c') {
      cout << "   harga tiket pesawat ekonomi class anda	: Rp8.750.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 8.75 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 8.75 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    }
  } else if (rute == 5) {
    cout << "   +===================================================+\n";
    cout << "   |                Kalimantan-Palembang               |\n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "   | NO. |       Tanggal        |         Pukul        |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  1. |      20 Juni 2050    |       21.10 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  2. |    12 Januari 2045   |       05.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  3. |   12 Oktober 2040    |       19.00 WIB      |\n";
    cout << "   |---------------------------------------------------|\n";
    cout << "   |  4. |   15 September 2024  |       15.20 WIB      |\n";
    cout << "   +===================================================+\n";
    cout << "   Silahkan pilih tanggal dan waktu yang tersedia\n";
    cout << "   Silahkan ketik nomor pilihan anda	(1/2/3/4):	";
    cin >> tanggalwaktu;
    cout << endl;
    cout << "   +=========================================+ \n";
    cout << "   |           Tipe Kursi Pesawat            | \n";
    cout << "   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n";
    cout << "   |  A. |           First Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  B. |          Bisnis Class             | \n";
    cout << "   |-----------------------------------------| \n";
    cout << "   |  C. |         Ekonomi Class             | \n";
    cout << "   +=========================================+ \n";
    cout << "Masukkan kode kelas pesawat (A/B/C)	:	";
    cin >> kodepesawat;
    if (kodepesawat == 'A' || kodepesawat == 'a') {
      cout << "   harga tiket pesawat first class anda	: Rp19.000.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 19 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 19 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'B' || kodepesawat == 'b') {
      cout << "   harga tiket pesawat bisnis class anda	: Rp11.800.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 11.8 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 11.8 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    } else if (kodepesawat == 'C' || kodepesawat == 'c') {
      cout << "   harga tiket pesawat ekonomi class anda	: Rp3.650.000\n";
      cout << "   jumlah tiket yang ingin anda pesan	:	";
      cin >> jumlah;
      cout << endl;
      hargatiket = 3.65 * jumlah;
      cout << "	total harga	= 	" << hargatiket << " jt + ppn\n";
      ppn = 3.65 * 0.1;
      totalharga = hargatiket + ppn;
      cout << "	total harga	=	" << totalharga << " jt ";
    }
  } else {
    cout << " Pilihan rute anda tidak tersedia\n";
    return 0;
  }

  char nama[50][50];
  int umur[20];
  cout << "\n==============================================================================\n";
  cout << "	Jumlah penumpang	:	" << jumlah << endl;
  for (int i = 1; i <= jumlah; i++) {
    cout << "	Nama Penumpang ke-" << i << endl;
    cout << "	Nama	:	";
    cin >> nama[i];
    cout << "	Umur	:	";
    cin >> umur[i];
    cout << endl;
  }
  cout << "==============================================================================\n";
  cout << endl << endl;
  cout << "	DATA PENUMPANG\n";
  for (int j = 1; j <= jumlah; j++) {
    cout << "	Nama Penumpang ke-" << j << "	:	" << nama[j] << endl;
    cout << "	Umur			:	" << umur[j] << endl << endl;
  }
  cout << "	Jumlah Tiket	:	" << jumlah << endl;
  cout << "	Harga Tiket	:	" << hargatiket << " jt " << endl;
  cout << "	PPN		:	" << ppn << endl;
  cout << "	Jumlah bayar	:	" << totalharga << " jt " << endl << endl;
}
