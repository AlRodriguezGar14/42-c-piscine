/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_dicfix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantama <rsantama@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:46:32 by rsantama          #+#    #+#             */
/*   Updated: 2023/10/28 23:46:49 by rsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fn_dicfix(unsigned long *dic_key, char dic_values[][11])
{
	dic_key[0] = 0;
	dic_key[1] = 1;
	dic_key[2] = 2;
	dic_key[3] = 3;
	dic_key[4] = 4;
	dic_key[5] = 5;
	dic_key[6] = 6;
	dic_key[7] = 7;
	dic_key[8] = 8;
	dic_key[9] = 9;
	dic_key[10] = 10;
	dic_key[11] = 11;
	dic_key[12] = 12;
	dic_key[13] = 13;
	dic_key[14] = 14;
	dic_key[15] = 15;
	dic_key[16] = 16;
	dic_key[17] = 17;
	dic_key[18] = 18;
	dic_key[19] = 19;
	dic_key[20] = 20;
	dic_key[21] = 30;
	dic_key[22] = 40;
	dic_key[23] = 50;
	dic_key[24] = 60;
	dic_key[25] = 70;
	dic_key[26] = 80;
	dic_key[27] = 90;
	dic_key[28] = 100;
/*
	dic_key[29] = 1000;
	dic_key[30] = 1000000;
	dic_key[31] = 1000000000;
	dic_key[32] = 1000000000000;
	dic_key[33] = 1000000000000000;
	dic_key[34] = 1000000000000000000;
	dic_key[35] = 1000000000000000000000;
	dic_key[36] = 1000000000000000000000000;
	dic_key[37] = 1000000000000000000000000000;
	dic_key[38] = 1000000000000000000000000000000;
	dic_key[39] = 1000000000000000000000000000000000;
	dic_key[40] = 1000000000000000000000000000000000000;
*/

	dic_values[0][0] = 'z';
	dic_values[0][1] = 'e';
	dic_values[0][2] = 'r';
	dic_values[0][3] = 'o';

	dic_values[1][0] = 'o';
	dic_values[1][1] = 'n';
	dic_values[1][2] = 'e';

	dic_values[2][0] = 't';
	dic_values[2][1] = 'w';
	dic_values[2][2] = 'o';

	dic_values[3][0] = 't';
	dic_values[3][1] = 'h';
	dic_values[3][2] = 'r';
	dic_values[3][3] = 'e';
	dic_values[3][4] = 'e';

	dic_values[4][0] = 'f';
	dic_values[4][1] = 'o';
	dic_values[4][2] = 'u';
	dic_values[4][3] = 'r';

	dic_values[5][0] = 'f';
	dic_values[5][1] = 'i';
	dic_values[5][2] = 'v';
	dic_values[5][3] = 'e';
	
	dic_values[6][0] = 's';
	dic_values[6][1] = 'i';
	dic_values[6][2] = 'x';

	dic_values[7][0] = 's';
	dic_values[7][1] = 'e';
	dic_values[7][2] = 'v';
	dic_values[7][3] = 'e';
	dic_values[7][4] = 'n';

	dic_values[8][0] = 'e';
	dic_values[8][1] = 'i';
	dic_values[8][2] = 'g';
	dic_values[8][3] = 'h';
	dic_values[8][4] = 't';

	dic_values[9][0] = 'n';
	dic_values[9][1] = 'i';
	dic_values[9][2] = 'n';
	dic_values[9][3] = 'e';

	dic_values[10][0] = 't';
	dic_values[10][1] = 'e';
	dic_values[10][2] = 'n';

	dic_values[11][0] = 'e';
	dic_values[11][1] = 'l';
	dic_values[11][2] = 'e';
	dic_values[11][3] = 'v';
	dic_values[11][4] = 'e';
	dic_values[11][5] = 'n';

	dic_values[12][0] = 't';
	dic_values[12][1] = 'w';
	dic_values[12][2] = 'e';
	dic_values[12][3] = 'l';
	dic_values[12][4] = 'v';
	dic_values[12][5] = 'e';

	dic_values[13][0] = 't';
	dic_values[13][1] = 'h';
	dic_values[13][2] = 'i';
	dic_values[13][3] = 'r';
	dic_values[13][4] = 't';
	dic_values[13][5] = 'e';
	dic_values[13][6] = 'e';
	dic_values[13][7] = 'n';

	dic_values[14][0] = 'f';
	dic_values[14][1] = 'o';
	dic_values[14][2] = 'u';
	dic_values[14][3] = 'r';
	dic_values[14][4] = 't';
	dic_values[14][5] = 'e';
	dic_values[14][6] = 'e';
	dic_values[14][7] = 'n';

	dic_values[15][0] = 'f';
	dic_values[15][1] = 'i';
	dic_values[15][2] = 'f';
	dic_values[15][3] = 't';
	dic_values[15][4] = 'e';
	dic_values[15][5] = 'e';
	dic_values[15][6] = 'f';

	dic_values[16][0] = 's';
	dic_values[16][1] = 'i';
	dic_values[16][2] = 'x';
	dic_values[16][3] = 't';
	dic_values[16][4] = 'e';
	dic_values[16][5] = 'e';
	dic_values[16][6] = 'n';

	dic_values[17][0] = 's';
	dic_values[17][1] = 'e';
	dic_values[17][2] = 'v';
	dic_values[17][3] = 'e';
	dic_values[17][4] = 'n';
	dic_values[17][5] = 't';
	dic_values[17][6] = 'e';
	dic_values[17][7] = 'e';
	dic_values[17][8] = 'n';

	dic_values[18][0] = 'e';
	dic_values[18][1] = 'i';
	dic_values[18][2] = 'g';
	dic_values[18][3] = 'h';
	dic_values[18][4] = 't';
	dic_values[18][5] = 'e';
	dic_values[18][6] = 'e';
	dic_values[18][7] = 'n';

	dic_values[19][0] = 'n';
	dic_values[19][1] = 'i';
	dic_values[19][2] = 'n';
	dic_values[19][3] = 'e';
	dic_values[19][4] = 'n';
	dic_values[19][5] = 't';
	dic_values[19][6] = 'e';
	dic_values[19][7] = 'e';
	dic_values[19][8] = 'n';

	dic_values[20][0] = 't';
	dic_values[20][1] = 'w';
	dic_values[20][2] = 'e';
	dic_values[20][3] = 'n';
	dic_values[20][4] = 't';
	dic_values[20][5] = 'y';

	dic_values[21][0] = 't';
	dic_values[21][1] = 'h';
	dic_values[21][2] = 'i';
	dic_values[21][3] = 'r';
	dic_values[21][4] = 't';
	dic_values[21][5] = 'y';

	dic_values[22][0] = 'f';
	dic_values[22][1] = 'o';
	dic_values[22][2] = 'r';
	dic_values[22][3] = 't';
	dic_values[22][4] = 'y';

	dic_values[23][0] = 'f';
	dic_values[23][1] = 'y';
	dic_values[23][2] = 'f';
	dic_values[23][3] = 't';
	dic_values[23][4] = 'y';

	dic_values[24][0] = 's';
	dic_values[24][0] = 'i';
	dic_values[24][0] = 'x';
	dic_values[24][0] = 't';
	dic_values[24][0] = 'y';

	dic_values[25][0] = 's';
	dic_values[25][1] = 'e';
	dic_values[25][2] = 'v';
	dic_values[25][3] = 'e';
	dic_values[25][4] = 'n';
	dic_values[25][5] = 't';
	dic_values[25][6] = 'y';

	dic_values[26][0] = 'e';
	dic_values[26][1] = 'i';
	dic_values[26][2] = 'g';
	dic_values[26][3] = 'h';
	dic_values[26][4] = 't';
	dic_values[26][5] = 'y';

	dic_values[27][0] = 'n';
	dic_values[27][1] = 'i';
	dic_values[27][2] = 'n';
	dic_values[27][3] = 'e';
	dic_values[27][4] = 't';
	dic_values[27][5] = 'y';

	dic_values[28][0] = 'h';
	dic_values[28][1] = 'u';
	dic_values[28][2] = 'n';
	dic_values[28][3] = 'd';
	dic_values[28][4] = 'r';
	dic_values[28][5] = 'e';
	dic_values[28][6] = 'd';
}



/* 0 0 0 1: one
 0 0 0 2: two
 0 0 0 3: three
 0 0 0 4: four
 0 0 0 5: five
 0 0 0 6: six
 0 0 0 7: seven
 0 0 0 8: eight
 0 0 0 9: nine
 0 0 1 0: ten
 0 0 1 1: eleven
 0 0 1 2: twelv
 0 0 1 3: thirteen
 0 0 1 4: fourteen
 0 0 1 5: fifteen
 0 0 1 6: sixteen
 0 0 1 7: seventeen
 0 0 1 8: eighteen
 0 0 1 9: nineteen
 0 0 2 0: twenty
 0 0 3 0: thirty
 0 0 4 0: forty
 0 0 5 0: fifty
 0 0 6 0: sixty
 0 0 7 0: seventy
 0 0 8 0: eighty
 0 0 9 0: ninety
 0 1 0 0: hundred
 1 0 0 0: thousand
 2 0 0 0: million
 3 0 0 0: billion
 4 0 0 0: trillion
 5 0 0 0: quadrillion
 6 0 0 0: quintillion
 7 0 0 0: sextillion
 8 0 0 0: septillion
 9 0 0 0: octillion
10 0 0 0: nonillion
11 0 0 0: decillion
12 0 0 0: undecillion
*/




int main() {
    unsigned long dic_key[28];
    char dic_values[28][11];
    int i = 0, j = 0;

    fn_dicfix(dic_key, dic_values);

    while (i < 28) {
        j = 0;
        while (j < 11 || dic_values[i][j] != '\0') 
        {
            write(1, &dic_values[i][j], 1);
            j = j + 1;
        }
        write(1, "\n", 1);
        i = i + 1;
    }
    return 0;
}
