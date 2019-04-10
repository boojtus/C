#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int n=1000;
int tab[1000];


void sortowanie_babelkowe(int *tmp)
{
    for(int i=0;i<n;i++)
		for(int j=1;j<n-i;j++)
		if(tmp[j-1]>tmp[j])
			//zamiana miejscami
			swap(tmp[j-1], tmp[j]);
}

void quick_sort(int *tmp,int lewy, int prawy)
{

      int i,j,piwot;

      i = (lewy + prawy) / 2;
      piwot = tmp[i]; tmp[i] = tmp[prawy];
      for(j = i = lewy; i < prawy; i++)
      if(tmp[i] < piwot)
      {
        swap(tmp[i], tmp[j]);
        j++;
      }
      tmp[prawy] = tmp[j]; tmp[j] = piwot;
      if(lewy < j - 1)  quick_sort(tmp,lewy, j - 1);
      if(j + 1 < prawy) quick_sort(tmp,j + 1, prawy);
}

void InsertionSort(int *arr){
      if(n > 1){
            int size = n;
            for(int i = 1; i < size; ++i){
                  int j = i - 1;
                  int key = arr[i];
                  while(j >= 0 && arr[j] > key){
                        arr[j+1] = arr[j];
                        --j;
                  }
                  arr[j+1] = key;
            }
      }
}
int main()
{
    double czas;
    srand(time(0));
    for(int i=0; i<n;i++){
        tab[i]=rand() %5001 -2500;
    }

    clock_t start = clock();
    sortowanie_babelkowe(tab);
    clock_t stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas wykonania sortowania bablekowaego na 1000 elementach to: "<<czas<<" ms"<<endl<<"#################"<<endl;

    start = clock();
    quick_sort(tab,0,n-1);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas wykonania quick sorta na 1000 elementach to: "<<czas<<" ms"<<endl<<"#################"<<endl;

    start = clock();
    InsertionSort(tab);
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas wykonania insetion sort na 1000 elementach to: "<<czas<<" ms"<<endl<<"#################"<<endl;
}


