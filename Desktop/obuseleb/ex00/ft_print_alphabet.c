#include <unistd.h>

void ft_print_alphabet (void);



int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_alphabet(void)		     
{
    int i;

    i = 'a';
    while (i <= 'z')
    {
      ft_putchar(i);
      i = i + 1;
    }

  
}

int main ()
{
  ft_print_alphabet();
  return (0);
}
