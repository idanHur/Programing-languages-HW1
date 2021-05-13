#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int Q3(int a, int b, char ch);
int Q3CheckNumBiggerThanZero(int num);
void Q5A(int arr[SIZE]);
void Q5B(int arr[SIZE]);
void Q5C(int arr[SIZE]);
void Q5D(int arr[SIZE]);
void Swap(int* num1,int* num2);
int main()
{
	printf("==================Q3===================\n");
	printf("ans Q3 ---> %d", Q3(2, 1, '<'));
	printf("\n==================Q5A===================\n");
	int arrA[] = { 5, 1, 2, 4, 3 };
	Q5A(arrA);
	for (int i = 0; i < 5; i++)
		printf("%d\n", arrA[i]);
	printf("\n==================Q5B===================\n");
	int arrB[] = { 5, 1, 2, 4, 3 };
	Q5B(arrB);
	for (int i = 0; i < 5; i++)
		printf("%d\n", arrB[i]);
	printf("\n==================Q5C===================\n");
	int arrC[] = { 5, 1, 2, 4, 3 };
	Q5C(arrC);
	for (int i = 0; i < 5; i++)
		printf("%d\n", arrC[i]);
	printf("\n==================Q5D===================\n");
	int arrD[] = { 5, 1, 2, 4, 3 };
	Q5D(arrD);
	for (int i = 0; i < 5; i++)
		printf("%d\n", arrD[i]);
	

}
int Q3(int a, int b, char ch)
{
	int difference = a - b;
	int ansWhoIsBigger = Q3CheckNumBiggerThanZero(difference);
	switch (ch)
	{
		case '<': //who is bigger
			switch (ansWhoIsBigger)
			{
			case 1: // a-b= positive a bigger
				return a;
			case 0:	// a-b= negative b bigger
				return b;
			}
		case '>': //who is smaller
			switch (ansWhoIsBigger)
			{
			case 1:	// a-b= positive b smaller
				return b;
			case 0:	// a-b= negative a smaller
				return a;
			}
	default:
		return -1;
	}
}
int Q3CheckNumBiggerThanZero(int num)
{
	return num > 0;
}

void Q5A(int arr[SIZE])
{
	for (int i = 0; i < SIZE-1; i++)
		for (int j = 0; j < SIZE -i-1; j++)
			for (int e = 0; e < arr[j] - arr[j+1] > 0; e=e) //run zero or  one times
				Swap(arr + j, arr + j + 1);
}

void Q5B(int arr[SIZE])
{
	int i = 0, j = 0;
	while (i < SIZE - 1)
	{
		while (j < SIZE - i - 1)
		{
			while (arr[j]-arr[j+1]>0)
				Swap(arr + j, arr + j+1);
			j++;
		}
		i++;
	}
}
void Q5C(int arr[SIZE])
{
	//first max of arr to last index
	if (arr[0] > arr[1])
		Swap(arr, arr + 1);
	if (arr[1] > arr[2])
		Swap(arr+1, arr + 2);
	if (arr[2] > arr[3])
		Swap(arr+2, arr + 3);
	if (arr[3] > arr[4])
		Swap(arr + 3, arr + 4);
	//second max of arr to last index -1
	if (arr[0] > arr[1])
		Swap(arr, arr + 1);
	if (arr[1] > arr[2])
		Swap(arr + 1, arr + 2);
	if (arr[2] > arr[3])
		Swap(arr + 2, arr + 3);
	//third max of arr to last index -2
	if (arr[0] > arr[1])
		Swap(arr, arr + 1);
	if (arr[1] > arr[2])
		Swap(arr + 1, arr + 2);
	//last check between the smallest
	if (arr[0] > arr[1])
		Swap(arr, arr + 1);
}

void Q5D(int arr[SIZE])
{
	int numOfloops = 0;
	sortLoop:
	if (numOfloops == 4)
		return;
	if (arr[0] > arr[1])
		Swap(arr, arr + 1);
	if (arr[1] > arr[2] && numOfloops < 3)
		Swap(arr + 1, arr + 2);
	if (arr[2] > arr[3] && numOfloops < 2)
		Swap(arr + 2, arr + 3);
	if (arr[3] > arr[4] && numOfloops < 1)
	{
		Swap(arr + 3, arr + 4);
		numOfloops++;
		goto sortLoop;
	}
	numOfloops++;
	goto sortLoop;
		
}

void Swap(int* num1, int* num2)
{
	int temp = *num2;
	*num2 = *num1;
	*num1 = temp;
}

