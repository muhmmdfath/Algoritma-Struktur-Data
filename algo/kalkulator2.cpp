#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int array[5];
    int choice, num1, num2, result;

    // Input data untuk array
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> array[i];
    }

    // Menu pilihan operasi
    cout << "Pilih operasi yang ingin dilakukan:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cin >> choice;

    // Input data untuk operasi
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    // Melakukan operasi sesuai pilihan
    if (choice == 1) {
        result = num1 + num2;
    } else if (choice == 2) {
        result = num1 - num2;
    } else if (choice == 3) {
        result = num1 * num2;
    } else if (choice == 4) {
        result = num1 / num2;
    } else {
        cout << "Operasi tidak valid." << endl;
        return 0;
    }
    cout << "Hasil operasi: " << result << endl;
    array[5] = result;

    // Menampilkan array sebelum diurutkan
    cout << "Array sebelum diurutkan:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Mengurutkan array secara ascending
    sort(array, array + 6);

    // Menampilkan array setelah diurutkan ascending
    cout << "Array setelah diurutkan ascending:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Mengurutkan array secara descending
    sort(array, array + 6, greater<int>());

    // Menampilkan array setelah diurutkan descending
    cout << "Array setelah diurutkan descending:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
