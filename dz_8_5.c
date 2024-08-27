//Домашнее задание №8
 // Задача 5. Поменять местами
//Составить функцию, которая меняет в массиве минимальный и максимальный
//элемент местами. Прототип функции
//void change_max_min(int size, int a[])
//Данные на входе: Функция принимает на вход размер массива и
//массив чисел типа int
//Данные на выходе: Функция не возвращает значения, измененный
//массив сохраняется на месте исходного.

#include <stdio.h>

int arr_input(int n, int arr[])
{
int i=0;
 for(i = 0; i< n; i++)
 scanf("%d",&arr[i]);
 return i;
}

int arr_max(int n, int arr[])
{
   int i= 0;
   int ind_max=0;
   int max=arr[0];
 for(i = 1; i < n; ++i)
 {
 if(arr[i]>max)
   {
 max=arr[i];
 ind_max=i;
   }
 }
 return ind_max;
}

int arr_min(int n, int arr[])
{
   int i= 0;
   int ind_min=0;
   int min=arr[0];
 for(i = 1; i < n; ++i)
 {
 if(arr[i]<min)
   {
   min=arr[i];
   ind_min=i;
   }
  }
 return ind_min;
}

void arr_print(int len , int arr[])
{
 for (int i = 0; i < len; i++)
 printf("%d ",arr[i]);
 printf("\n");
}

void arr_change(int arr[], int _ind_min, int _ind_max)
{
    int temp=0;
    temp=arr[_ind_min];
    arr[_ind_min]=arr[_ind_max];
    arr[_ind_max]=temp;
}
int main()
{
int arrsize=5;
int a[arrsize];
arr_input(arrsize, a);
arr_change(a, arr_min(arrsize,a), arr_max(arrsize,a));
arr_print(arrsize,a);
return 0;
}
