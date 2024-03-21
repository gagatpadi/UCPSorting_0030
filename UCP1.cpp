#include <iostream>
using namespace std;
int gagat[30];
int n;

void input() {         
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";   
		cin >> n; 
		if (n <= 30) 
			break; 
		else {     
			cout << "\narray dapat mempunyai maksimal 30 elemen.\n"; 
		}
	}
	cout << endl;                          
	cout << "===================" << endl; 
	cout << "masukan elemen array" << endl;
	cout << "===================" << endl; 

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> gagat[i];
	}
}

void insertionSort() {
	int i, temp, j;


	for (i = 1; i <= n - 1; i++) { 
		temp = gagat[i]; 
		j = i - 1; 
		while (j >= 0 && gagat[j] > temp) 
		{
			gagat[j + 1] = gagat[j]; 
			j = j - 1; 
		}
		gagat[j + 1] = temp; 
	}
}

void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << gagat[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionSort();
	display();
	system("pause");

	return 0;
}


// 1.	Jelaskan bagaimana algoritma Insertion Sort 
// membandingkan serta menukar elemen-elemen.?
// jawab:
// pertama di bagi menjadi 2 urut
// contoh=
// arr 70, 80, 30, 10, 20
//        |
//      di pisah

// 70     80, 30, 10, 20

// 80 dan 70 di bandingkan 
// pass 1 = 70, 80      30, 10, 20
//                 30 di bandingkan lagi
// menjadi pass 2 = 30, 70, 80      10, 20
//                           10 di bandingkan lagi
// menjadi pass 3 = 10, 30, 70, 80     20
//                                20 di bandingkan lagi
// menjadi pass 4 = 10, 20, 30, 70, 80 (inilah hasil akhir)

// 2. Jelaskan bagaimana algoritma Selection Sort 
// membandingkan serta menukar elemen-elemen.?
// jawab:
// -untuk data yg banyak dengan catatan di tambah langkahnya
// -data di bagi ke lebih kecil dulu, data besar di bagi dulu menjadi 
// suplies dengan jarak tertentu
// LANGKAH:
// - bagi 3 suplies (Index selisih 3)
// - menggunakan algoritma insertion short
// - bagi 2 suplies (Index selisih 2)
// - sisa = urutkan dengan insertion short
// contoh kasus
// arr 70,30,40,10,80,20,90,110,75,60,45

// 70,10,90,60     ->     10,60,70,90
// 30,80,110,45    ->     30,45,,80,110
// 40,20,75        ->     20,40,75

// 10,30,20,60,45,40,70,80,75,90,110

// 10,20,45,70,75,110 (AKHIR)
// 30,60,40,80,90 (AKHIR)

// using insertion sort (manual)
// 10,20,30,40,45,60,70,75,80,90,110

//3. Dalam algorithma sortir, bagaimana cara untuk 
// mengetahui jumlah langkah yang dilakukan? Jelaskan.\
// jawab:
// dengan menghitung jumlah langkah
// contoh=
// arr 2,5,6,3,7
// dengan men swap barisan awal apabila sudah urut tidak perlu di swap
// pass 1: 
// 2,5,6,3,7
// pass 2: 
// 2,5,6,3,7
// pass 3: 
// 2,5,3,6,7
// pass 4:
// 2,3,5,6,7   ----> FINAL

// N= 5, Pass= 4