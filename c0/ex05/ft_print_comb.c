#include <unistd.h>

void ft_putchar(char c){
        write(1,&c,1);
}

void ft_commas(void){
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void){
        char one='0',two='0',three='0';
        while (one<='7'){
                while (two<='8'){
                        while (three<='9'){
                                if (one!=two && two!=three && three!=one){
                                        if (two<three && one<two){
                                        ft_putchar(one);
                                        ft_putchar(two);
                                        ft_putchar(three);
					if (!(one=='7' && two=='8' && three=='9')
							ft_commas();
                                        }
                                }
                                three++;
                        }
                        three='0';
                        two++;
                }
                two='0';
                one++;
        }
}
