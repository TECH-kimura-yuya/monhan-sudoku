#include <iostream>
using namespace std;

//配列の中身をシャッフルする。
void shuffle(int array[], int size)
{
  for(int i = 0; i < size; i++)
    {
      int j = rand()%size;
      int t = array[i];
      array[i] = array[j];
      array[j] = t;
    }
}

//数独を画面に表示する。
void print(int array[], int size)
{
   for(int i = 0; i < size; i++)
    {
      cout << array[i] << " ";
      if(i==3)
      {
        cout << endl;
      }
    }
}

//縦列の計算
bool tate(int a[],int b[], int c[], int d[])
{  
  if(
    a[0] + b[0] + c[0] + d[0] == 10 &&
    a[1] + b[1] + c[1] + d[1] == 10 &&
    a[2] + b[2] + c[2] + d[2] == 10 &&
    a[3] + b[3] + c[3] + d[3] == 10 
    )return true;
  else return false;
} 

//正方形の計算
bool square(int a[], int b[], int c[], int d[])
{
  if(
    a[0] + a[1] + b[0] + b[1] == 10 &&
    a[2] + a[3] + b[2] + b[3] == 10 &&
    c[0] + c[1] + d[0] + d[1] == 10 &&
    c[2] + c[3] + d[2] + d[3] == 10
  )return true;
  else return false;
}

//ランダムで数独に穴をあける
void Random0(int a[])
{
  int r1 = 0;
  int r2 = 0;
  while(r1 == r2)
    {
      r1 = rand() %4;
      r2 = rand() %4;
    }
  a[r1] = 0;
  a[r2] = 0;
}

int main(){
  
  int A[4] = {1,2,3,4};
  int B[4] = {1,2,3,4};
  int C[4] = {1,2,3,4};
  int D[4] = {1,2,3,4};
 
  for(int i = 0; i < 1000; i++)
 {
  shuffle(A,4);
  shuffle(B,4);
  shuffle(C,4);
  shuffle(D,4);
   if(tate(A,B,C,D) == true && square(A,B,C,D) == true) break;
   if(i == 999 && (tate(A,B,C,D) == false || square(A,B,C,D) == false))
   {
     cout << "数独を作成できませんでした。" << endl;
   }
 }

  Random0(A);
  Random0(B);
  Random0(C);
  Random0(D);
  
  print(A,4);
  print(B,4);
  print(C,4);
  print(D,4);
}