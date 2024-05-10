#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <iostream>
#include <math.h>

#define MAX 50

using namespace std;

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
//void QuickSort(int arr[], int low, int high);
//int Partition (int arr[], int low, int high);

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
int Partition (int arr[], int low, int high)
{
	//bo sung code	
}
*/


// Ham thuc hien giai thuat Quick sort 
void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // pi là chi so cua phan tu da dung dung vi tri
        //va la phan tu chia mang lam 2 mang con trai va phai 
        int pi = partition(arr, low, high);
 
        // Goi de qui sx 2 mang con rai va phao
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
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


