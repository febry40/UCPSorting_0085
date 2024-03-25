// teknik pengurutan data dengan cara menukar dua data yang bersebelahan jika urutan dari data tersebut salah
// ukuran diperkecil terlebih dahulu lalu ke tahap pembagian berjenjang
// alghoritma bubble sort, karena pada tahapan ini akan dilakukan pengulangan hingga syarat terpenuhi dan berurutan 

#include <iostream>
#include <string>
using namespace std;

int febry[85];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada Febry :";
        cin >> n;
        if (n <= 85)
            break;
        else {
            cout << "\nfebry hanya dapat mempunyai maksimal 85 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << " Masukan elemen Febry" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> febry[i];
    }
}
void BubbleSortArray() {
    int pass = 1;
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (febry[j] > febry[j + 1]) {
                int temp = febry[j];
                febry[j] = febry[j + 1];
                febry[j + 1] = temp;
            }
        }
        pass = pass + 1;

        cout << "\nPass " << pass - 1 << ":";
        for (int k = 0; k < n; k++) {
            cout << febry[k] << " ";
        }
        cout << endl;
    } while (pass <= n - 1);
}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen Febry yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << febry[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    BubbleSortArray();
    display();

    return 0;
}