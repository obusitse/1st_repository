#include <unistd.h>

void ft_is_negative (int n);



int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_is_negative(int n)
{
 

  
  if (n < 0)
    {
      ft_putchar('N');
    }

  else {
    ft_putchar('P');
  }

}

int main ()
{


  int n = 9  ;
  ft_is_negative(n);
  return (0);
}
