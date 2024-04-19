#include <stdio.h>
#include <stdlib.h>
#define A1 3
#define A2 4
#define B1 2
#define B2 5
//#include "Pr7FillMatrix.c"

  int fill_mat (int*,int, int);
  void print_array ( int* , int , int );
  double Min (int*,int,int);
  double Max (int*,int,int);


int main()
{
    int A[A1][A2],B[B1][B2];
    int* Arr1;
    int* Brr1;
    double F,Smin,Zmin,Smax,Zmax;
    Arr1 = &A[0][0];
    Brr1 = &B[0][0];
    fill_mat(Arr1,A1,A2);
    print_array(Arr1,A1,A2);
   // sleep(1);
    printf("\n\n");
    fill_mat(Brr1,B1,B2);
    print_array(Brr1,B1,B2);
    Smin = Min(Brr1,B1,B2);
    printf("Smin = %lf\n\n",Smin);
    Zmin = Min (Arr1,A1,A2);
    printf("Zmin = %lf\n\n",Zmin);
    Smax = Max (Brr1,B1,B2);
    printf("Smax = %lf\n\n",Smax);
    Zmax = Max(Arr1,A1,A2);
    printf("Zmax = %lf\n\n",Zmax);
    F= (Smin+Zmin)/(Zmax - Smin);
    printf("F=%lf\n\n",F);
    return 0;
}

int fill_mat (int * Adress,int Size1, int Size2)
{
   // srand(time(0));
    for (int i = 0;i<Size1;i++)  {
        for (int j = 0;j<Size2;j++)   {
            *(Adress+i*Size2+j)=rand()%101-50+rand()%11-5;
        }
    }

    return 0;
}

void print_array ( int * Adress, int Size1, int Size2)
{
    for (int i = 0;i<Size1;i++) {
        for(int j = 0;j<Size2;j++) {
            printf(" %d ",*(Adress+i*Size2+j));
        }
    printf("\n");
    }
    printf("\n");
}

double Min (int *Adress,int Size1,int Size2)
{
    int min=*(Adress);
    for (int i = 0;i<Size1;i++)  {
        for (int j = 0;j<Size2;j++)  {
            if (*(Adress+i*Size2+j)< min)
                min = *(Adress+i*Size2+j);
        }
    }
    return min;
}

double Max (int*Adress,int Size1,int Size2)
{
    int max=*(Adress);
    for (int i = 0;i<Size1;i++)  {
        for (int j = 0;j<Size2;j++)   {
            if (*(Adress+i*Size2+j)> max)
                max = *(Adress+i*Size2+j);
        }
    }
    return max;
}
