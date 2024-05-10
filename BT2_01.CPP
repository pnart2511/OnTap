
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <iostream>
#include <math.h>

using namespace std;

//Khai bao nguyen mau ham
int Fibo(int n);

/*Chuong trinh chinh*/
int main()
{
	int n;
	printf("\nNhap vao gia tri cua n = ");
	scanf("%d", &n);
	printf("\nFibonacci cua %d = %d ", n, Fibo(n));
	getch();
	return 1;
}

//DN chi tiet ham
int Fibo(int n) 
{
	if(n==1 || n==2)
		return 1;
	else
		return Fibo(n-1) + Fibo(n-2);
}
