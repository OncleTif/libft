# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 11:56:45 by tmanet            #+#    #+#              #
#    Updated: 2015/12/02 12:14:37 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

NAME_TEST = test_libft

all: $(NAME)

$(NAME):


cleantest:
	rm -rf $(NAME_TEST)

clean: cleantest
	rm -rf

fclean: clean
	rm -rf $(NAME)

re: fclean all
