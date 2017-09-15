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
divert(-1)

# ------------- Real Configuration ------------------ #
define(MK_NUM_OF_TARGETS, 1)
define(MK_FCLEAN_ON_RE, 0)
define(MK_DEBUG, 0)

define(MK_LIBFT_NAME, libft)
define(MK_LIBFT_ISLIB, 1)
define(MK_LIBFT_INCLUDE_DIRS, includes)
define(MK_LIBFT_SRC_DIRS, standard_functions expand_functions printf_functions)
define(MK_LIBFT_DEBUG, 0)
define(MK_LIBFT_LITE, 0)

# ------------ Automated Variables ------------------ #
define(MK_AUTO_ISLINUX, ifelse(esyscmd(uname -s | tr -d '\n'), `Darwin', 0, 1))
define(MK_AUTO_COMPILER,ifelse(MK_AUTO_ISLINUX, 1, clang, gcc))

define(MK_LIBFT_AUTO_SRC_DIR, patsubst(MK_LIBFT_SRC_DIRS,` ',`````,'''''))
pushdef(`MK_LIBFT_AUTO_SRC_DIR', ifelse(MK_LIBFT_SRC_DIRS,.,.,{MK_LIBFT_AUTO_SRC_DIR}))
define(MK_LIBFT_AUTO_SRC, esyscmd(bash -c 'find MK_LIBFT_AUTO_SRC_DIR -type f -name "*.c" | sed -e "s/$/ \\\/g"'))
define(MK_LIBFT_AUTO_SRC_DIR, patsubst(MK_LIBFT_SRC_DIRS,` ',```,'''))
define(MK_LIBFT_AUTO_INCLUDE_DIR, -I patsubst(MK_LIBFT_INCLUDE_DIRS,` ',``` -I '''))

divert(0)
# ------------- Automated Configuration ------------- #
CFLAGS = ifelse(MK_DEBUG, 1,-g) ifelse(MK_AUTO_ISLINUX,1,-fPIC) -Wall -Werror -Wextra
LIBFT_NAME = ifelse(MK_LIBFT_ISLIB, 1, MK_LIBFT_NAME.a, MK_LIBFT_NAME)
CFLAGS += MK_LIBFT_AUTO_INCLUDE_DIR
LIBFT_SRC = MK_LIBFT_AUTO_SRC
LIBFT_OBJ = $(subst .c,.o, $(LIBFT_SRC))

# ------------------- Targets ----------------------- #

all: $(LIBFT_NAME)

%.o: %.c
	MK_AUTO_COMPILER $(CFLAGS) -c $? -o $@

$(LIBFT_NAME): $(LIBFT_OBJ)
	ifelse(MK_LIBFT_ISLIB, 0,MK_AUTO_COMPILER $(LIBFT_OBJ) -o $(LIBFT_NAME),
	/bin/rm -f $(LIBFT_NAME)
	ar rcs $(LIBFT_NAME) $(LIBFT_OBJ))dnl


re: ifelse(MK_FCLEAN_ON_RE, 1,f)clean all dnl


clean:
	/bin/rm -f $(LIBFT_OBJ)

fclean: clean
	/bin/rm -f $(LIBFT_NAME)
