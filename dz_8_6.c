//Домашнее задание №8
//Задача 6. Больше среднего
//Определить количество положительных элементов квадратной матрицы,
//превышающих по величине среднее арифметическое всех элементов главной
//диагонали. Реализовать функцию среднее арифметическое главной диагонали.
//Данные на входе: 5 строк по 5 целых чисел через пробел
//Данные на выходе: Одно целое число

#include <stdio.h>
const int sq_mat_size = 5;
int main_diag_avg(int arr[][sq_mat_size])
{
int sum = 0;
int i=0;
 while(i < sq_mat_size)
 {
 sum += arr[i][i];
 i++ ;
 }
 return sum / sq_mat_size;
}
int main()
{
int matrix[sq_mat_size][sq_mat_size];
 for (int i = 0; i < sq_mat_size; i++)
 for (int j = 0; j < sq_mat_size; j++)
 scanf("%d", &matrix[i][j]);
int avg = main_diag_avg(matrix);
int count = 0;
 for (int i = 0; i < sq_mat_size; i++)
 for (int j = 0; j < sq_mat_size; j++)
 if ((matrix[i][j] > 0) && (matrix[i][j] > avg))
 count++;
 printf("%d", count);
 return 0;
}
