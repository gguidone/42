#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
 write(1, &c, 1);
}

void smat(char mat[10][10])
{
 int j;
 int i;
 j = 0;

 while (j < 10)
 {
  i = 0;
  while (i < 10)
  {
   ft_putchar(mat[j][i]);
   ft_putchar(' ');
   i++;
  }
  ft_putchar('\n');
  j++;
 }
}

int check(char mat[10][10], int rig, int col)
{
 int i;

 i = 0;
 while (i < 10)
 {
  if (mat[i][col] == 49 || mat[rig][i] == 49)
   return (0);
   i++;
 }
 i = 1;
 while (i < 10)
 {
  if((mat[rig + i][col + i] == 49 || mat[rig - i][col - i] == 49) && (rig - i >= 0 && rig + i<= 9) && (col - i >= 0 && col + i<= 9))
   return (0);
  if((mat[rig + i][col - i] == 49 || mat[rig - i][col + i] == 49) && (rig - i >= 0 && rig + i<= 9) && (col - i >= 0 && col + i<= 9))
   return (0);
  i++;
 }
 return (1);
}

void rec(char mat[10][10])
{
 int j;
 int i;
 j = 0;
 while(j < 10)
 {
  i = 0;
  while (i < 10)
  {
   if(check(mat, j, i))
   {
    mat[j][i] = 49;
    ft_putchar(i + 48);
   }
   i++;
  }
  j++;
 }

}

int ft_ten_queens_puzzle(void)
{
 char mat[10][10];
 int j;
 int i;
 j = 0;
 while(j < 10)
 {
  i = 0;
  while (i < 10)
  {
   mat[j][i] = 48;
   i++;
  }
  j++;
 }
 rec(mat);
 ft_putchar('\n');
 smat(mat);
 return (0);
}

int main()
{
 ft_ten_queens_puzzle();
 return (0);
}