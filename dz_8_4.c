//Домашнее задание №8
//Задача 4. Два одинаковых
//Написать только одну логическую функцию, которая определяет, верно ли, что
//среди элементов массива есть два одинаковых. Если ответ «да», функция
//возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
//int is_two_same(int size, int a[]);
//Данные на входе: Массив из целых чисел
//Данные на выходе: Функция возвращает 1 или 0

  #include <stdio.h>
int count =0;
int arr_input(int n, int arr[])
{
int i=0;
 for(i = 0; i< n; i++)
 scanf("%d",&arr[i]);
 return i;
}

int is_two_same(int ln, int *arr)
{
  int l=0;
    while (l<ln)
     {
       for(int j=l+1; j<ln; j++)
        {
            if(arr[j]==arr[l])
            {
            ++count;            
            }
        }
        ++l;
     }
return count;
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
printf("\n");
if (is_two_same(arrsize,a)>0)
    printf("YES");
else 
    printf("NO");
return 0;
}
