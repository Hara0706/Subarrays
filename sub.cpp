#include <iostream>

using namespace std;



int main() {


  int a[5] = {1,3,4,5,6};

  int i=0,j,k;

  while(i<5)

  {

      j=i;

      while(j<5)

      {

          k=i;

          while(j>=k)

          {

              cout<<a[k]<<" ";

              k++;

          }

          cout<<endl;

          j++;

      }

      i++;

  }




   return 0;

}
