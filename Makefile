# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efischer <efischer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 10:22:22 by efischer          #+#    #+#              #
#    Updated: 2020/05/28 19:03:26 by efischer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#==============================================================================#
#=================================== SUMMARY ==================================#
#==============================================================================#
#==============================================================================#
#==========		HEAD.......................................42        ==========#
#==========		PATH.......................................62        ==========#
#==========		COMPILE....................................69        ==========#
#==========		SRCS.......................................82        ==========#
#===============	IS_STR.................................86   ===============#
#===============	ANALYSE_STR............................108  ===============#
#===============	PROCESS_STR............................123  ===============#
#===============	NBR....................................154  ===============#
#===============	PRINT..................................168  ===============#
#===============	LIST...................................181  ===============#
#===============	MEMORY.................................203  ===============#
#===============	FREE...................................216  ===============#
#===============	SORT...................................221  ===============#
#===============	TAB....................................226  ===============#
#===============	FT_PRINTF..............................230  ===============#
#===============	VCT....................................251  ===============#
#==========		OBJS.......................................255       ==========#
#==============================================================================#
#==============================================================================#



NAME = libft.a

#==============================================================================#
#==================================== HEAD ====================================#
#==============================================================================#

INCLUDES += includes/
HEAD += libft.h
HEAD += libstruct.h
HEAD += ft_printf.h
HEAD += analyse_str.h
HEAD += free.h
HEAD += is_str.h
HEAD += list.h
HEAD += memory.h
HEAD += nbr.h
HEAD += sort.h
HEAD += print.h
HEAD += process_str.h
HEAD += tab.h
IFLAGS = -I

#==============================================================================#
#==================================== PATH ====================================#
#==============================================================================#

PATHO += objs/
PATHI += $(INCLUDES)

#==============================================================================#
#=================================== COMPILE ==================================#
#==============================================================================#

CC = clang
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
#CFLAGS += -pedantic
#CFLAGS += -Wpadded
#CFLAGS += -fsanitize=address,undefined -g3
COMPILE += $(CC) -c

#==============================================================================#
#==================================== SRCS ====================================#
#==============================================================================#

#==================================== IS_STR ==================================#

SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isblank.c
SRCS += ft_iscntrl.c
SRCS += ft_isdigit.c
SRCS += ft_isgraph.c
SRCS += ft_ismeta.c
SRCS += ft_isprint.c
SRCS += ft_islower.c
SRCS += ft_isspace.c
SRCS += ft_isupper.c
SRCS += ft_isxdigit.c
SRCS += ft_str_is_alpha.c
SRCS += ft_str_is_numeric.c
SRCS += ft_str_is_blank.c
SRCS += ft_str_is_printable.c
SRCS += ft_str_is_lowercase.c
SRCS += ft_str_is_uppercase.c
SRCS += ft_str_is_alnum.c

#================================= ANALYSE_STR ================================#

SRCS += ft_strchr.c
SRCS += ft_strcasecmp.c
SRCS += ft_strcasestr.c
SRCS += ft_strcmp.c
SRCS += ft_strequ.c
SRCS += ft_strlen.c
SRCS += ft_strncasecmp.c
SRCS += ft_strncmp.c
SRCS += ft_strnequ.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strstr.c

#================================= PROCESS_STR ================================#

SRCS += ft_strcat.c
SRCS += ft_strncat.c
SRCS += ft_strcpy.c
SRCS += ft_toupper.c
SRCS += ft_strdup.c
SRCS += ft_strncpy.c
SRCS += ft_tolower.c
SRCS += ft_strclr.c
SRCS += ft_strdel.c
SRCS += ft_strnew.c
SRCS += ft_strsub.c
SRCS += ft_strjoin.c
SRCS += ft_striter.c
SRCS += ft_striteri.c
SRCS += ft_strtrim.c
SRCS += ft_strmap.c
SRCS += ft_strmapi.c
SRCS += ft_strsplit.c
SRCS += ft_strlcat.c
SRCS += ft_strlowcase.c
SRCS += ft_strupcase.c
SRCS += ft_strndup.c
SRCS += ft_strcapitalize.c
SRCS += ft_join_free.c
SRCS += get_next_line.c
SRCS += get_next_line_fd.c
SRCS += ft_strndup_free.c
SRCS += ft_split_white_spaces.c

#===================================== NBR ====================================#

SRCS += ft_abs.c
SRCS += ft_atoi.c
SRCS += ft_atoi_ul.c
SRCS += ft_atoi_base.c
SRCS += ft_factorial.c
SRCS += ft_intlen.c
SRCS += ft_intlen_u.c
SRCS += ft_itoa.c
SRCS += ft_itoa_base.c
SRCS += ft_itoa_base_u.c
SRCS += ft_power.c

#==================================== PRINT ===================================#

SRCS += ft_putchar.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl.c
SRCS += ft_putendl_fd.c
SRCS += ft_putstr.c
SRCS += ft_putstr_fd.c
SRCS += ft_putnbr.c
SRCS += ft_putnbr_fd.c
SRCS += ft_print_matrix.c
SRCS += ft_print_tab.c

#==================================== LIST ====================================#

SRCS += ft_lstadd.c
SRCS += ft_dblstadd.c
SRCS += ft_lstaddend.c
SRCS += ft_dblstaddend.c
SRCS += ft_lstdel.c
SRCS += ft_dblstdel.c
SRCS += ft_lstdelone.c
SRCS += ft_dblstdelone.c
SRCS += ft_lstdelto.c
SRCS += ft_lstiter.c
SRCS += ft_lstlen.c
SRCS += ft_dblstlen.c
SRCS += ft_lstmap.c
SRCS += ft_lstnew.c
SRCS += ft_lstnewnomalloc.c
SRCS += ft_dblstnew.c
SRCS += ft_lstnew_str.c
SRCS += ft_lstprint.c
SRCS += ft_dblstprint.c
SRCS += ft_lst_to_char_tab.c
SRCS += ft_lstcpy.c

#==================================== MEMORY ==================================#

SRCS += ft_bzero.c
SRCS += ft_memalloc.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memdel.c
SRCS += ft_memjoin.c
SRCS += ft_memmove.c
SRCS += ft_memset.c

#==================================== FREE ====================================#

SRCS += ft_free_tab.c
SRCS += ft_free_content.c

#==================================== SORT ====================================#

SRCS += ft_selection_sort.c
SRCS += ft_merge_sort.c

#===================================== TAB ====================================#

SRCS += ft_tablen.c

#================================== FT_PRINTF ==================================#

SRCS += ft_printf.c
SRCS += ft_asprintf.c
SRCS += ft_dprintf.c
SRCS += ft_manage_conv.c
SRCS += ft_util.c
SRCS += ft_flag.c
SRCS += ft_printfloat.c
SRCS += ft_manage_str.c
SRCS += ft_diouxx.c
SRCS += ft_long_diouxx.c
SRCS += ft_manage_p.c
SRCS += ft_width_precision.c
SRCS += ft_process_flag.c
SRCS += ft_putunicode.c
SRCS += ft_check_unicode.c
SRCS += ft_convert_to_unicode.c
SRCS += ft_manage_unicode.c
SRCS += ft_round.c

#===================================== VCT ====================================#

SRCS += vct_newstr.c
SRCS += vct_new.c
SRCS += vct_resize.c
SRCS += vct_addstr.c
SRCS += vct_pushstr.c
SRCS += vct_clear.c
SRCS += vct_reset.c
SRCS += vct_addchar.c
SRCS += vct_pushchar.c
SRCS += vct_insertchar.c
SRCS += vct_insertstr.c
SRCS += vct_del.c
SRCS += vct_dellastchar.c
SRCS += vct_delfirstchar.c
SRCS += vct_delchar.c
SRCS += vct_delnchar.c
SRCS += vct_replace.c

#==============================================================================#
#==================================== OBJS ====================================#
#==============================================================================#

OBJS = $(patsubst %.c, $(PATHO)%.o, $(SRCS))
DOBJS = $(patsubst %.c, $(PATHO)%.o, $(SRCS))


vpath %.c srcs/ft_printf/
vpath %.c srcs/is_str/
vpath %.c srcs/analyse_str/
vpath %.c srcs/process_str/
vpath %.c srcs/nbr/
vpath %.c srcs/print/
vpath %.c srcs/memory/
vpath %.c srcs/list/
vpath %.c srcs/free/
vpath %.c srcs/sort/
vpath %.c srcs/tab/
vpath %.c srcs/vct/
vpath %.h $(PATHI)

all: $(NAME)

$(NAME): $(PATHO) $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(PATHO)%.o: %.c $(HEAD) Makefile
	$(COMPILE) $(CFLAGS) $< $(IFLAGS) $(INCLUDES) -o $@

$(PATHO):
	mkdir $@

clean:
	$(RM) $(OBJS)
	$(RM) -R $(PATHO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
