#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxVal = *max_element(arr.begin(), arr.end());
    cout << "Nilai tertinggi dalam array adalah: " << maxVal << endl;

    int cari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> cari;

    auto it = find(arr.begin(), arr.end(), cari);
    if (it != arr.end()) {
        int index = distance(arr.begin(), it);
        cout << "Angka " << cari << " ditemukan di indeks ke-" << index << endl;
    } else {
        cout << "Angka " << cari << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
