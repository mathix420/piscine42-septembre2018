# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Tests.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agissing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 18:35:33 by agissing          #+#    #+#              #
#    Updated: 2018/09/08 18:52:39 by agissing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
ESC_SEQ="\x1b["
COL_RESET=$ESC_SEQ"39;49;00m"
COL_RED=$ESC_SEQ"31;01m"

cc -Wall -Wextra -Werror TestMatchRecc.c ../Match_N_Match/ex00/match.c -o "Match.out"
cc -Wall -Wextra -Werror TestNMatchRecc.c ../Match_N_Match/ex01/nmatch.c -o "N_Match.out"

echo $COL_RED"Test de 'aBc TesXw784fbi3294bv test wiefjuvbuw9ov eif.c' et 'a*.c' :\n $COL_RESET"

./Match.out "aBc TesXw784fbi3294bv test wiefjuvbuw9ov eif.c" "a*.c"
./N_Match.out "aBc TesXw784fbi3294bv test wiefjuvbuw9ov eif.c" "a*.c"

echo $COL_RED"Test de 'aBc TesXw784fbi3294bv test wiefjuvbuw9ov eif.c' et 'a*.*' :\n $COL_RESET"

./Match.out "aBc TesXw784fbi3294bv test wiefjuvbuw9ov eif.c" "a*.*"
./N_Match.out "aBc TesXw784fbi3294bv test wiefjuvbuw9ov eif.c" "a*.*"

echo $COL_RED"Test de 'abcbd' et '*b*' :\n $COL_RESET"

./Match.out "abcbd" "*b*"
./N_Match.out "abcbd" "*b*"

echo $COL_RED"Test de 'abc' et 'a**' :\n $COL_RESET"

./Match.out "abc" "a**"
./N_Match.out "abc" "a**"

echo $COL_RED"Test de 'TEST123' et '**' :\n $COL_RESET"

./Match.out "TEST123" "**"
./N_Match.out "TEST123" "**"