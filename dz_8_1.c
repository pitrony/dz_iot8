//Домашнее задание №8
//  Задача 1. Сортировка по возрастанию
//Написать только одну функцию, которая сортирует массив по возрастанию.
//Необходимо реализовать только одну функцию, всю программу составлять не надо.
//Строго согласно прототипу. Имя функции и все аргументы должны быть:
//void sort_array(int size, int a[])
//Всю программу загружать не надо, только одну эту функцию. Можно просто
//закомментировать текст всей программы, кроме данной функции.
//Данные на входе: Функция принимает на вход, первый аргумент - размер
//массива, второй аргумент - адрес нулевого элемента.
//Данные на выходе: Функция ничего не возвращает. Производит
//сортировку переданного ей массива по возрастанию.
#include <stdio.h>
int arr_input(int arr[], int n)
{
int i=0;
 for(i = 0; i< n; i++)
 scanf("%d",&arr[i]);
 return i;
}
void sort_array(int n, int arr[])
{
int i= 0;
int j = 0;
int temp = 0;
 for(i = 0; i < n; ++i)
 {
 for(j = i; j < n; ++j)
   {
 if(arr[i] > arr[j])
     {  
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
     }
   }
 }
}
void arr_print(int arr[], int len)
{
 for (int i = 0; i < len; i++)
 printf("%d ",arr[i]);
 printf("\n");
}

int main()
{
int arrsize=5;
int a[arrsize];
arr_input(a, arrsize);
printf("\n");
arr_print(a, arrsize);
sort_array(arrsize, a);
arr_print(a, arrsize);
return 0;
}   
