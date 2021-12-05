#include<iostream>
#include<conio.h>
using namespace std;

int pascal(int row, int col)
{
  if (col == 0 || col == row)
  {
    return 1;
  }
  else
  {
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
  }
}


int main()
{
    system("cls");
    int row;
    cout<<"Enter n : ";
    cin>>row;


    for (int i=0;i<row;i++)
    {
        for(int col =0;col<=i;col++)
            cout<<pascal(i,col);

        cout<<"\n";
    }

    return 0;
}
