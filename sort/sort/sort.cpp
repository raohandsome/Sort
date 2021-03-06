// maopao.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<cstdlib>
#include<ctime>
#include "stdlib.h"
using namespace std;
#define ARRAYSIZE 100
void BubbleSort(double *arr,int num);
void insertSort(double *arr, int num);
void sectionSort(double *arr, int num);
int main()
{
	srand((unsigned)time(NULL));
	double arr[ARRAYSIZE] = { 0 };
	double arr1[ARRAYSIZE] = { 0 };
	for (int i = 0; i < ARRAYSIZE; i++) {
		arr1[i] = arr[i]=rand() ;
	}

	//for (int i = 0; i < ARRAYSIZE; i++)
	//{
	//	//cout << arr[i] << endl;
	//}
	cout << endl;
	//BubbleSort(arr,5);
	clock_t start_time=clock();
	insertSort(arr, ARRAYSIZE);
	clock_t end_time = clock();
	cout << endl;
	clock_t start_time1 = clock();
	sectionSort(arr1, ARRAYSIZE);
	clock_t end_time1 = clock();
	double ms = 100.1;
	cout << ms << endl;
	std::cout << " Elements Quick Sort Running time is: " << (double)(static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000.0f) << "ms" << std::endl;
	//cout << "time is " << static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000 << endl;
	cout << "time is " << static_cast<double>(end_time1- start_time1) / CLOCKS_PER_SEC * 1000 << endl;
	system("pause");
    return 0;
}

void BubbleSort(double *arr,int num)//冒泡排序
{
	double *p = arr; 
	int time = 0;
	for (int j = 0; j < num; j++)
	{
		int m_iLength = 0;
		
		for (int i = 0; i < num - 1-i; i++)
		{
			
			if (p[i] > p[i + 1])
			{
				double temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
				m_iLength++;
			}	
		}
		if (m_iLength == 0)
		{
			break;
		}
		time++;
	}
	for (int i = 0; i < num; i++)
	{
		cout << p[i] << endl;
	}
	cout << time << endl;
	
}
void insertSort(double *arr, int num)//插入排序
{
	
	for (int i = 1; i < num; i++)
	{
		int j = i;
		double temp = arr[i];
		for (; j > 0; j--)
		{
			if (arr[j - 1] > temp)
			{
				arr[j] = arr[j - 1];
			}
			else
			{
				break;
			}
			
		}
		arr[j] = temp;
		//while(arrayone[j-1] > arr[i])
		//{
		//	/*double temp = arr[i-1];
		//	arr[i-1] = arr[i];
		//	arr[i] = temp;*/
		//	arrayone[j] = arrayone[j-1];
		//	j--;
		//	if (j == 0)
		//	{
		//		break;
		//	}
		//}
		//if (j == i)
		//{
		//	arrayone[j] = arr[i];
		//}


		
	}
	/*double *arrayone=new double [num];
	arrayone[0] = arr[0];
	for (int i = 1; i < num; i++)
	{    
	

		for (int j = 0; j < i; j++)
		{
			if (arrayone[j]>arr[i])
			{
				for (int k = i - 1; k >= j; k--)
				{
					arrayone[k + 1] = arrayone[k];
				}
				arrayone[j] = arr[i];
				break;
			}
			else
			{
				arrayone[i] = arr[i];
			}
		}	
	}*/
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}
void sectionSort(double *arr, int num)
{
	for (int i = 0; i < num-1; i++)
	{
		
		double min = arr[i];
		int index = i;
		for (int j=i; j < num-1; j++)
		{
			
			if (min > arr[j+1])
			{
				min = arr[j+1];
				index = j+1;
			}
			//else
			//{
			//	//min = arr[j];
			//	index = j;
			//}
			
		}
		if (i != index)
		{
			double temp = arr[i];
			arr[i] = min;
			arr[index] = temp;
		}
		

	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}