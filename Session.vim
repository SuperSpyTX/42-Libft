let SessionLoad = 1
if &cp | set nocp | endif
let s:so_save = &so | let s:siso_save = &siso | set so=0 siso=0
let v:this_session=expand("<sfile>:p")
silent only
cd ~/Documents/42/libft
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
badd +1 Makefile
badd +1 includes/libft.h
badd +1 inprogress-functions/ft_putchar_fd.c
badd +1 inprogress-functions/ft_putnbr_fd.c
badd +1 inprogress-functions/ft_putstr_fd.c
badd +17 inprogress-functions/ft_isalnum.c
badd +17 inprogress-functions/ft_isalpha.c
badd +16 inprogress-functions/ft_isascii.c
badd +17 inprogress-functions/ft_isdigit.c
badd +18 inprogress-functions/ft_isprint.c
badd +15 inprogress-functions/ft_tolower.c
badd +17 inprogress-functions/ft_toupper.c
badd +16 mandatory-functions/ft_putstr.c
badd +8 mandatory-functions/ft_putnbr.c
badd +18 mandatory-functions/ft_putchar.c
badd +27 mandatory-functions/ft_atoi.c
badd +7 mandatory-functions/ft_putendl.c
badd +17 mandatory-functions/ft_putendl_fd.c
badd +29 mandatory-functions/ft_strnstr.c
badd +21 mandatory-functions/ft_strchr.c
badd +26 mandatory-functions/ft_strrchr.c
badd +1 mandatory-functions/ft_strcat.c
badd +1 mandatory-functions/ft_strlcat.c
badd +22 mandatory-functions/ft_strncat.c
badd +20 mandatory-functions/ft_strcmp.c
badd +0 mandatory-functions/ft_putchar_fd.c
badd +18 mandatory-functions/ft_putstr_fd.c
argglobal
silent! argdel *
set stal=2
edit includes/libft.h
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 41 - ((31 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
41
normal! 0
tabedit Makefile
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 0
tabedit mandatory-functions/ft_strlcat.c
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 28 - ((27 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
28
normal! 03|
tabedit mandatory-functions/ft_strncat.c
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 17 - ((16 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
17
normal! 05|
tabedit mandatory-functions/ft_strcat.c
set splitbelow splitright
set nosplitbelow
set nosplitright
wincmd t
set winminheight=1 winheight=1 winminwidth=1 winwidth=1
argglobal
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let s:l = 1 - ((0 * winheight(0) + 40) / 80)
if s:l < 1 | let s:l = 1 | endif
exe s:l
normal! zt
1
normal! 029|
tabnext 3
set stal=1
if exists('s:wipebuf')
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToO
set winminheight=1 winminwidth=1
let s:sx = expand("<sfile>:p:r")."x.vim"
if file_readable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &so = s:so_save | let &siso = s:siso_save
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
