//Домашнее задание №8
//Задача 2. Четные в начало
//Написать только одну функцию, которая ставит в начало массива все четные
//элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
//между собой. Строго согласно прототипу:
//void sort_even_odd(int n, int a[])
//Данные на входе: Функция принимает на вход целые числа
//Данные на выходе: Отсортированный исходный массив

#include <stdio.h>
int count_ev, count_od = 0;
int arr_input(int arr[], int n)
{
int i=0;
 for(i = 0; i< n; i++)
 scanf("%d",&arr[i]);
 return i;
}

void sort_even_odd(int n, int arr[], int arrev[], int arrod[])
{
   int i= 0;
 for(i = 0; i < n; ++i)
 {
 if(arr[i]%2==0)
   {
 arrev[count_ev++]=arr[i];
   }
 else
   {
 arrod[count_od++]=arr[i];
   }
 } 
}
void arr_print(int arr[], int len)
{
 for (int i = 0; i < len; i++)
 printf("%d ",arr[i]);

}

int main()
{
int arrsize=5;
int a[arrsize];
int arrev[arrsize];
int arrod[arrsize];
arr_input(a, arrsize);
printf("\n");
arr_print(a, arrsize);
sort_even_odd(arrsize, a, arrev, arrod);
printf("\n");
arr_print(arrev, count_ev);
arr_print(arrod, count_od);
return 0;
}
