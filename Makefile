#* ************************************************************************** */
#*                                                                            */
#*                                                        :::      ::::::::   */
#*   Makefile                                           :+:      :+:    :+:   */
#*                                                    +:+ +:+         +:+     */
#*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
#*                                                +#+#+#+#+#+   +#+           */
#*   Created: 2017/04/18 03:42:42 by jkrause           #+#    #+#             */
#*   Updated: 2017/06/11 02:45:14 by jkrause          ###   ########.fr       *#
#*                                                                            */
#* ************************************************************************** */

# ----------------- Configuration ------------------- #
NAME = libft.a
INCLUDE = ./includes/
#SRC_DIRS = ./inprogress-functions/ ./mandatory-functions/ ./personal-functions/

# For shared library
CFLAGS = -Wall -Werror -Wextra -I $(INCLUDE)

# -------------- Automated Variables ---------------- #
# Fucking norm
#SRC = $(wildcard $(addsuffix *.c, $(SRC_DIRS)))
SRC = mandatory-functions/ft_strrchr.c \
mandatory-functions/ft_putstr.c \
mandatory-functions/ft_strcmp.c \
mandatory-functions/ft_strlcat.c \
mandatory-functions/ft_strncpy.c \
mandatory-functions/ft_strstr.c \
mandatory-functions/ft_isdigit.c \
mandatory-functions/ft_putnbr.c \
mandatory-functions/ft_strdel.c \
mandatory-functions/ft_isalnum.c \
mandatory-functions/ft_putstr_fd.c \
mandatory-functions/ft_toupper.c \
mandatory-functions/ft_strcpy.c \
mandatory-functions/ft_strdup.c \
mandatory-functions/ft_putnbr_fd.c \
mandatory-functions/ft_putendl_fd.c \
mandatory-functions/ft_memdel.c \
mandatory-functions/ft_strnstr.c \
mandatory-functions/ft_putchar.c \
mandatory-functions/ft_isascii.c \
mandatory-functions/ft_strlen.c \
mandatory-functions/ft_strnew.c \
mandatory-functions/ft_memalloc.c \
mandatory-functions/ft_putendl.c \
mandatory-functions/ft_strncat.c \
mandatory-functions/ft_strncmp.c \
mandatory-functions/ft_putchar_fd.c \
mandatory-functions/ft_isalpha.c \
mandatory-functions/ft_strcat.c \
mandatory-functions/ft_tolower.c \
mandatory-functions/ft_atoi.c \
mandatory-functions/ft_isprint.c \
mandatory-functions/ft_strchr.c \
personal-functions/is_whitespace.c \

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
