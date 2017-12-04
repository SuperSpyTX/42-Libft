#* ************************************************************************** */
#*                                                                            */
#*                                                        :::      ::::::::   */
#*   Makefile                                           :+:      :+:    :+:   */
#*                                                    +:+ +:+         +:+     */
#*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
#*                                                +#+#+#+#+#+   +#+           */
#*   Created: 2017/04/18 03:42:42 by jkrause           #+#    #+#             */
#*   Updated: 2017/06/11 02:45:14 by jkrause          ###   ########.fr       */
#*                                                                            */
#* ************************************************************************** */
# ----------------- Version 1.5 --------------------- #

# ------------- Automated Configuration ------------- #
CFLAGS =   -Wall -Werror -Wextra
LIBFT_NAME = libft.a
CFLAGS += -I includes
LIBFT_SRC = standard_functions/ft_strrchr.c \
standard_functions/ft_putstr.c \
standard_functions/ft_strcmp.c \
standard_functions/ft_strlcat.c \
standard_functions/ft_memcpy.c \
standard_functions/ft_no.c \
standard_functions/ft_ltostr_base.c \
standard_functions/ft_is_whitespace.c \
standard_functions/ft_memmove.c \
standard_functions/ft_strsplit.c \
standard_functions/ft_strncpy.c \
standard_functions/ft_lstmap.c \
standard_functions/ft_lstadd.c \
standard_functions/ft_striter.c \
standard_functions/ft_atol.c \
standard_functions/ft_strstr.c \
standard_functions/ft_isdigit.c \
standard_functions/ft_putnbr.c \
standard_functions/ft_memccpy.c \
standard_functions/ft_strdel.c \
standard_functions/ft_memchr.c \
standard_functions/ft_bzero.c \
standard_functions/ft_isalnum.c \
standard_functions/ft_putstr_fd.c \
standard_functions/ft_lstiter.c \
standard_functions/ft_lstdelone.c \
standard_functions/ft_toupper.c \
standard_functions/ft_strcpy.c \
standard_functions/ft_lstnew.c \
standard_functions/ft_strdup.c \
standard_functions/ft_putnbr_fd.c \
standard_functions/ft_striteri.c \
standard_functions/ft_strmap.c \
standard_functions/ft_putendl_fd.c \
standard_functions/ft_memdel.c \
standard_functions/ft_strnstr.c \
standard_functions/ft_putchar.c \
standard_functions/ft_isascii.c \
standard_functions/ft_strlen.c \
standard_functions/ft_strsub.c \
standard_functions/ft_strnew.c \
standard_functions/ft_memalloc.c \
standard_functions/ft_putendl.c \
standard_functions/ft_strncat.c \
standard_functions/ft_strnchr.c \
standard_functions/ft_itoa.c \
standard_functions/ft_strncmp.c \
standard_functions/ft_memcmp.c \
standard_functions/ft_strtrim.c \
standard_functions/ft_strequ.c \
standard_functions/ft_putchar_fd.c \
standard_functions/get_next_line.c \
standard_functions/ft_memset.c \
standard_functions/ft_isalpha.c \
standard_functions/ft_itoa_base.c \
standard_functions/ft_strcat.c \
standard_functions/ft_tolower.c \
standard_functions/ft_strnequ.c \
standard_functions/ft_strjoin.c \
standard_functions/ft_atoi.c \
standard_functions/ft_strclr.c \
standard_functions/ft_strmapi.c \
standard_functions/ft_isprint.c \
standard_functions/ft_lstdel.c \
standard_functions/ft_strchr.c \
standard_functions/ft_ishex.c \
expand_functions/expand_write.c \
expand_functions/expand_pad.c \
expand_functions/expand_get_next_line_until.c \
printf_functions/ft_printf.c \
printf_functions/modules/parse_module.c \
printf_functions/modules/string_module.c \
printf_functions/modules/bufferwrite_module.c \
printf_functions/modules/asterisks_module.c \
printf_functions/modules/integer_module.c \
printf_functions/modules/format_module.c \
printf_functions/modules/bufferstring_module.c \
printf_functions/modules/memorywrite_module.c \
printf_functions/module_manager.c \

LIBFT_OBJ = $(subst .c,.o, $(LIBFT_SRC))

# ------------------- Targets ----------------------- #

all: $(LIBFT_NAME)

%.o: %.c
	gcc $(CFLAGS) -c $? -o $@

$(LIBFT_NAME): $(LIBFT_OBJ)
	/bin/rm -f $(LIBFT_NAME)
	ar rcs $(LIBFT_NAME) $(LIBFT_OBJ)

re: clean all 

clean:
	/bin/rm -f $(LIBFT_OBJ)

fclean: clean
	/bin/rm -f $(LIBFT_NAME)
