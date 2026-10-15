#include <iostream>
#include <fstream>
#include <iomanip>

#define MAX 100

using namespace std;

void Nhap(int A[][MAX], int &n, const char* tenFile) {
    ifstream file(tenFile);
    
    if (!file.is_open()) {
        cout << "Khong the mo file " << tenFile << "! Vui long kiem tra lai." << endl;
        return;
    }

    file >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            file >> A[i][j];
        }
    }
    
    cout << "Da doc thanh cong du lieu tu file " << tenFile << endl;
    file.close();
}

void HienThi(int A[][MAX], int n) {
    cout << "\nMa tran trong so cua do thi:" << endl;
    

 

    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n; j++) {
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }
}

int main() {
    int A[MAX][MAX];
    int n = 0;

    Nhap(A, n, "Grap.txt");

    if (n > 0) {
        HienThi(A, n);
    }

    return 0;
}
