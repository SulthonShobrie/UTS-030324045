#include <iostream>
#include <conio.h>

using namespace std;

void dMenu(){
    system("cls");
    cout << "Aplikasi Exchange Sort" << "\n";       
    cout << "1. Memasukkan data" << "\n";            
    cout << "2. Menampilkan data" << "\n";            
    cout << "3. Sorting" << "\n";           
    cout << "4. Sepatah Kata" << "\n";            
    cout << "5. Exit" << "\n";           
    cout << "Masukan angka :";        
}

void mPertama(string pesan){
    system("cls");
    cout << "hallo saya menu " << pesan;
    getch();
}

void input(int data[]){
    system("cls");
    

    // Meminta input data dari pengguna
    cout << "Menu Memasukkan Data\n";
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << (i + 1) << ": ";
        cin >> data[i];
    }
    cout << "\nData berhasil dimasukkan!";
    getch();
}

void output(int data[]){
    system("cls");
    // Menampilkan hasil input data
    cout << "\nData yang anda masukkan adalah:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
    }
    getch();
}



void sepatahKata(){
    system("cls");
    cout << "Jangan lupa bernafas";
    getch();
}

void insertionSort(int data[], int n) {
  system("cls");
  int temp, j;
  for (int i = 1; i < n; i++) {
    temp = data[i];
    j = i - 1;
    while (j >= 0 && data[j] > temp) {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << data[i] << " ";
  }
  
  getch();
}

int main() {
    
    int data[5];
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl)
        {
        case '1':
            input(data);
            break;
        case '2':
            output(data);
            break;  
        case '3':
            insertionSort(data, sizeof(data) / sizeof(data[0]));
            break;  
        case '4':
            sepatahKata();
            break;  
        case '5':
            break;
        default:
            system("cls");
            cout << "Pilihan Tidak Tersedia";
            getch();
            break;
        }
    } while (pl != '5');
    
    return 0;
}