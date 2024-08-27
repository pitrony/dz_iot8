//Домашнее задание №8
//Задача 3. Максимум в массиве
//Написать только одну функцию, которая находит максимальный элемент в
//массиве. Всю программу загружать не надо.
//Прототип функции: int find_max_array(int size, int a[])
//Данные на входе: Массив состоящий из целых чисел. Первый аргумент,
//размер массива, второй аргумент адрес нулевого элемента.
//Данные на выходе: Одно целое число
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
   int max=arr[0];
 for(i = 1; i < n; ++i)
 {
 if(arr[i]>max)
   {
   max=arr[i];
   }
 
 }
 return max;
}
void arr_print(int len , int arr[])
 {
 for (int i = 0; i < len; i++)
 printf("%d ",arr[i]);
 }

int main()
{
int arrsize=5;
int a[arrsize];
arr_input(arrsize, a);
printf("\nМаксимальный элемент в массиве: ");
printf("%d", arr_max(arrsize,a));
return 0;
}
