# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2017/10/25 13:54:27 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

HEADERS = libft.h

SRC = ft_arraystrdel.c \
	  ft_atoi.c \
	  ft_atoi_strict.c \
	  ft_atoui_base.c \
	  ft_bzero.c \
	  ft_ctop.c \
	  ft_dlsdel.c \
	  ft_dlsdelone.c \
	  ft_dlsgetlast.c \
	  ft_dlsiter.c \
	  ft_dlsiterparam.c \
	  ft_dlsmap.c \
	  ft_dlsmap_order.c \
	  ft_dlsnew.c \
	  ft_dlspush.c \
	  ft_dlspush_back.c \
	  ft_error.c \
	  ft_intsize.c \
	  ft_intsize_base.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_itoa_base.c \
	  ft_lltoa_base.c \
	  ft_longlongrange_base.c \
	  ft_longlongsize_base.c \
	  ft_longrange_base.c \
	  ft_longsize_base.c \
	  ft_lsdel.c \
	  ft_lsdelone.c \
	  ft_lsgetelem.c \
	  ft_lsiter.c \
	  ft_lsiterparam.c \
	  ft_lsnew.c \
	  ft_lspush.c \
	  ft_lspush_back.c \
	  ft_lstadd.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstdelstr.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstnew.c \
	  ft_lstpush_back.c \
	  ft_lstsort.c \
	  ft_lstsortrev.c \
	  ft_lstswap.c \
	  ft_ltoa_base.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memrev.c \
	  ft_memset.c \
	  ft_memsort.c \
	  ft_pow.c \
	  ft_ptrarray.c \
	  ft_printchar.c \
	  ft_printchar_fd.c \
	  ft_putaddr.c \
	  ft_putnaddr.c \
	  ft_putaddr_fd.c \
	  ft_putnaddr_fd.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_adapt.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_base.c \
	  ft_putnbr_fd.c \
	  ft_putnbr_base_fd.c \
	  ft_putnbrendl.c \
	  ft_putnbrendl_fd.c \
	  ft_putnchar.c \
	  ft_putstr.c \
	  ft_putnstr.c \
	  ft_putstr_fd.c \
	  ft_putstr_lst.c \
	  ft_range.c \
	  ft_rangelength.c \
	  ft_rangelong_base.c \
	  ft_range_base.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strchr_replace.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcmpadapter.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdeladapter.c \
	  ft_strdup.c \
	  ft_strdup_sep.c \
	  ft_strndup.c \
	  ft_strequ.c \
	  ft_strequ_sep.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strjoin_clean.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strlen_sep.c \
	  ft_strltrim.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strsort.c \
	  ft_strsplit.c \
	  ft_strsplit_lst.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  ft_strtrim_cr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_uitoa_base.c \
	  ft_uint32_reverse.c \
	  ft_ulltoa_base.c \
	  ft_ultoa_base.c \
	  ft_ulltoaa_base.c \
	  ft_ultoaa_base.c \
	  get_next_line.c \
	  get_next_multiline.c \
	  get_substr_sep.c \
	  ft_printf.c \
	  ft_dprintf.c \
	  ft_param_builder.c \
	  ft_conv_lister.c \
	  ft_flag_lister.c \
	  ft_newconv.c \
	  ft_newflag.c \
	  ft_conv_picker.c \
	  ft_flag_picker.c \
	  ft_precision_picker.c \
	  ft_width_picker.c \
	  ft_wide_size.c \
	  ft_prec_modifier.c \
	  ft_width_modifier.c \
	  ft_wchartostr.c \
	  ft_space_modifier.c \
	  ft_strsplit_to_conv.c \
	  ft_str_conv_cleaner.c \
	  ft_conv_cleaner.c \
	  ft_flag_cleaner.c \
	  ft_param_cleaner.c \
	  ft_str_picker.c \
	  ft_string_modifier.c \
	  ft_plus_modifier.c \
	  ft_flag_h.c \
	  ft_flag_hash.c \
	  ft_flag_hh.c \
	  ft_flag_j.c \
	  ft_flag_l.c \
	  ft_last_char.c \
	  ft_hash_for_hex.c \
	  ft_flag_ll.c \
	  ft_flag_minus.c \
	  ft_flag_plus.c \
	  ft_flag_point.c \
	  ft_flag_space.c \
	  ft_flag_star.c \
	  ft_flag_z.c \
	  ft_flag_zero.c \
	  ft_conv_s.c \
	  ft_conv_c.c \
	  ft_conv_d.c \
	  ft_conv_no.c \
	  ft_conv_o.c \
	  ft_conv_x.c \
	  ft_conv_u.c \
	  ft_conv_upc.c \
	  ft_conv_upd.c \
	  ft_conv_upo.c \
	  ft_conv_ups.c \
	  ft_conv_upu.c \
	  ft_conv_upx.c \
	  ft_conv_p.c \
	  ft_conv_percent.c \
	  last_char.c

OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@ar rc $(NAME) $(OBJ)
	@echo "COMPILATION de $(NAME)"
	@ranlib $(NAME)

%.o: %.c $@ $(HEADERS)
	@$(CC) $(FLAGS) $<
	@echo "compilation de $<"

clean:
	@rm -rf $(OBJ)
	@echo "suppression des objets"

fclean: clean
	@rm -rf $(NAME) && echo "suppression de $(NAME)"

re: fclean all

norme:
	@norminette $(SRC) libft.h
