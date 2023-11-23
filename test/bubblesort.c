#include "syscall.h"
#define MAXSIZE 100

int main()
{
	int arr[MAXSIZE];
	int n, i, j, temp;
	
	// Nhap so luong phan tu
	PrintString("Nhap do dai mang: ");
	n = ReadInt();
	if (n < 0)
	{
		PrintString("Loi\n");
		Halt();
	}
	if (n > MAXSIZE)
	{
		PrintString("Do dai toi da la 100\n");
		Halt();
	}

	// Nhap mang
	PrintString("Nhap mang:\n");
	for (i = 0; i < n; i++)
	{
		arr[i] = ReadInt();
	}

	// Bubble sort
	for (i = 0; i < n - 1; i++) {
		for ( j = i + 1; j < n; j++) {
			if (arr[j-1] > arr[j]) {
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	PrintString("In mang:\n");
	for (i = 0; i < n; i++)
	{
		PrintInt(arr[i]);
	}

	Halt();
}
