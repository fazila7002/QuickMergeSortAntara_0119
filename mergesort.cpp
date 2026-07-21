#include <iostream>
using namespace std;

int arr[20], B[20]; //membuat array untuk main dan temporary

int n; //disini n untuk array input size

void input() 
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;
        if (n <= 20)
        {
            break;
        }
        else{
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n--------------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n----------============----" << endl;

    for (int i = i = 0; i<n; i++)
    {
        cout << "Array index ke- "<< i<<endl;
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{

    if (low >= high) //step1
    {
        return; //step1.a
    }

    int mid = (low + high) /2 ; //step2

    //step3
    //fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid); //step 3.a
    mergeSort(mid + 1,high); //step 3.b

    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) // step 4.d
{
    if (arr[i] <= arr[j]) // step 4.d.i
    {
        B[k] = arr[i];
        i++;
    }
    else
    {
        B[k] = arr[j];
        j++;
    }
    k++; // step 4.d.ii
}

}