#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menentukan kelas ekuivalensi
vector<vector<int> > equivalenceClasses(int arr[], int n) {
    // Membuat vektor kosong untuk kelas ekuivalensi
    vector<vector<int> > eqClasses;

    // Membuat vektor untuk setiap kelas ekuivalensi
    vector<int> eqClass1, eqClass2, eqClass3;

    // Memasukkan elemen ke dalam kelas ekuivalensi yang tepat
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            eqClass1.push_back(arr[i]);
        } else if (arr[i] >= 0 && arr[i] <= 50) {
            eqClass2.push_back(arr[i]);
        } else {
            eqClass3.push_back(arr[i]);
        }
    }

    // Menambahkan setiap kelas ekuivalensi ke dalam vektor kelas ekuivalensi
    eqClasses.push_back(eqClass1);
    eqClasses.push_back(eqClass2);
    eqClasses.push_back(eqClass3);

    return eqClasses;
}

int main() {
    // Membuat array untuk pengujian
    int arr[] = {-10, 20, 30, 70, 80, -5};

    // Mendapatkan jumlah elemen dalam array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Mencetak array yang akan diuji
    cout << "Array yang akan diuji: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Mendapatkan kelas ekuivalensi
    vector<vector<int> > eqClasses = equivalenceClasses(arr, n);

    // Mencetak kelas ekuivalensi
    cout << "Kelas Ekuivalensi:" << endl;
    for (int i = 0; i < eqClasses.size(); i++) {
        cout << "Kelas " << i + 1 << ": ";
        for (int j = 0; j < eqClasses[i].size(); j++) {
            cout << eqClasses[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
