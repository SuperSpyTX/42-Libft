#* ************************************************************************** */
#*                                                                            */
#*                                                        :::      ::::::::   */
#*   Makefile                                           :+:      :+:    :+:   */
#*                                                    +:+ +:+         +:+     */
#*   By: jkrause <jkrause@student.42.us.org>      e  +#+  +:+       +#+        */
#*                                                +#+#+#+#+#+   +#+           */
#*   Created: 2017/04/18 03:42:42 by jkrause           #+#    #+#             */
#*   Updated: 2017/06/11 02:45:14 by jkrause          ###   ########.fr       *#
#*                                                                            */
#* ************************************************************************** */

# ----------------- Configuration ------------------- #
NAME = libft.a
INCLUDE = ./includes/
#SRC_DIRS = ./inprogress-functions/ ./mandatory-functions/ ./personal-functions/
divert(-1)
## TAKE THAT, NORM.

define(SRC_DIRS, inprogress-functions mandatory-functions personal-functions)

define(SRC_DIRS2, patsubst(SRC_DIRS,` ',```,'''))
divert(0)
# For shared library
CFLAGS = -Wall -Werror -Wextra -I $(INCLUDE)

# -------------- Automated Variables ---------------- #
# Fucking norm
#SRC = $(wildcard $(addsuffix *.c, $(SRC_DIRS)))
SRC = syscmd(find {SRC_DIRS2} -type f -name "*.c" | sed -e "s/$/ \\\/g")
# For shared library
OBJ = $(subst .c,.o, $(SRC))

# ------------------- Targets ----------------------- #

all: $(NAME)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(subst .o,.c, $@) -o $@

# For shared library
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
