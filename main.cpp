#include <iostream>

using namespace std;

int main ()
{
    int i, j, m, n, matriksA[10][10], matriksB[10][10], hasil[10][10], pilihan;

    cout << "\nAda 3 Operasi Aritmatika Matriks" << endl;
    cout << "\t1. Penjumlahan\n\t2. Pengurangan\n\t3. Perkalian"
    << endl;
    cout << "Tentukan Pilihan Anda : ";
    cin >> pilihan;

    cout << "Masukkan Jumlah Baris Matriks: ";
    cin >> m;
    cout << "Masukkan Jumlah Kolom Matriks: ";
    cin >> n;

    cout << "Masukkan elemen Matriks A: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> matriksA[i][j];
        }
    }
    cout << "Masukkan elemen Matriks B: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> matriksB[i][j];
        }
    }

    if(pilihan==1)
    cout << "hasil penjumlahan Matriks: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            hasil[i][j]=matriksA[i][j]+matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
    }
    else if(pilihan==2)
    cout << "hasil pengurangan Matriks: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            hasil[i][j]=matriksA[i][j]-matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
    }
    else if(pilihan==3)
    cout << "hasil perkalian Matriks: \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            hasil[i][j]=matriksA[i][j]*matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
    }
    return 0;
}
