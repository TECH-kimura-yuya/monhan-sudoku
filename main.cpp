#include <iostream>
using namespace std;

char matrix[9][9];

int x,y,z;

void Reset()
{
  for(int x = 0; x<9; x++)
    {
      for(int y = 0; y<9; y++)
        {
          printf("%3d", matrix[x][y]);

          if ((x==3)&&(y==9)||(x==6)&&(y==9))
          {
            printf("%*s", z, "");
            cout << "\n" << endl;
          }
          
        }
      cout << endl;
    }
}

int main() {
  //for(int i=1;i==81;i++){
    //int x;
    //double num[i];
    //if(i%9==0){
      //cout << num[i] << endl;
    //}else{
      //cout << num[i];
    //}
  //}

  Reset();
  
}