#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat variable inputan n

void input()
{ // Procedure Input
while (true)
{
cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
cin >> n; // Memanggil variable inputan n 

if (n <= 20)
{ // Membuat Kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Membuat Pesan jika data lebih dari 20    
}
}
cout << endl; // Membuat jarak per baris program
cout << "=======================" << endl; // Membuat Tampilan susunan data element array
cout << "Masukkan Element Array" << endl;
cout << "=======================" << endl;

for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk  Menyimpan data pada array
{
cout << "Data Ke-" << (i + 1) << ": "; // Membuat atau menginputkan nilai data n
cin >> arr [i]; // Menyimpan nilai data n kedalam array arr 
}
}

void InsertionSort()
{ // Procedure InsertionSort

int temp; // Membuat Variable data temporer atau menyimpan sementara
int j, i; // Membuat Variable j sebagai penunda

for (i = 1; i <= n - 1; i++)
{ // Step 1

temp = arr[i]; // step 2

j = i - 1; // Step 3

while (j >= 0 && arr [j] > temp) // Step 4
{
arr [j + 1] = arr [j]; // Step 4a
j--; // Step 4b
}

arr [j + 1] = temp; // Step 5
}
}

void display()
{
cout << endl; // Output baris kosong
cout << "=================================" <<endl;
cout << "Total Pass = " << n-1 <<endl; // Count element movement
cout << "=================================" <<endl; // Output Ke Layar
cout << "Element Array yang telah tersusun" <<endl; // Output Ke Layar
cout << "=================================" <<endl; // Output Ke Layar

for (int j = 0; j < n; j++)
{ // Looping dengan j dimulai dari 0 hingga n-1
cout << arr[j] << endl; // Output Ke Layar
}
cout << endl; // Output Baris Kosong
}

int main()
{
input();
InsertionSort();
display();
system("Pause");
return 0;
}