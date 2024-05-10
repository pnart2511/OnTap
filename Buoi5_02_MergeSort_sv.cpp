#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <iostream>
#include <math.h>

#define MAX 50

using namespace std;

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);

//void Merge(int arr[], int l, int m, int r);
//void MergeSort(int arr[], int l, int r)


// Chuong trinh chinh------
int main ()
{
	int a[100], n;
	printf("n NHap Mang A: \n");
	NhapMang(a,n);
	printf("\n Mang A vua nhap : \n");
	XuatMang(a,n);
	printf("\nThuc hien sap xep chon - Selection Sort\n");
	//SelectionSort(a,n);
	
	printf("\nMang A sau khi sap xep\n");
	XuatMang(a,n);
		
	getch();
	return 1;
}


// Dinh nghia cac ham-----------
// Ham hoan doi 2 so nguyen
void HoanDoi(int &x, int &y)
{
	int tam = x; 
	x = y; 
	y = tam;
}


/*
// Gop 2 mang con arr[l...m] và arr[m+1..r]

void Merge(int arr[], int l, int m, int r)
{
	//bo sung code
}

*/


// Ham thuc hien giai thuat Merge Sort 
// l là chi so trai va r la chi so phai cua mang can duoc sx
void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Tuong tu (l+r)/2, nhung cach nay tranh lam tran so khi l va r l lon
        int m = l+(r-l)/2;
 
        // Goi ham de qui tiep tuc chia tung nua mang
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
} 

//Nhap mang
void NhapMang(int a[], int &n) 
{
	printf("NHAP DANH SACH SO NGUYEN\n");
	printf("->Nhap so luong phan tu: ");
	scanf("%d", &n);

	while(n<=0) {
		printf("-> Nhap lai so duong: ");
		scanf("%d", &n);
	}

	for(int i=0; i<=(n-1); i++) {
		printf("-Nhap phan tu thu %d:", i+1);
		scanf("%d", &a[i]);
	}
}

//Xuat Mang
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}


