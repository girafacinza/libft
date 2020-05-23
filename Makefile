# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 13:44:53 by lambrozi          #+#    #+#              #
#    Updated: 2020/05/23 13:14:22 by lambrozi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC 	=	gcc

C_FLAGS	=	-Wall -Werror -Wextra -I$(IDIR)

SDIR	=	./src
IDIR	=	./include
ODIR	=	./obj

_SRC	=	ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c \
		ft_toupper.c ft_isprint.c ft_tolower.c ft_strlcat.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
		ft_memmove.c ft_substr.c ft_strjoin.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_strlcpy.c ft_strnstr.c ft_calloc.c ft_strdup.c \
		ft_isupper.c ft_islower.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_strmapi.c ft_strtrim.c ft_atoi.c \
		ft_split.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c
SRC	=	$(addprefix $(SDIR)/,$(_SRC))	

OBJS	=	$(addprefix $(ODIR)/,$(_SRC:.c=.o))

$(ODIR)/%.o: $(SDIR)/%.c
	mkdir -p $(ODIR)
	$(CC) $(C_FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rc $@ $(OBJS)
	ranlib $(NAME)

all: $(NAME)

run:
	./$(NAME)

clean:
	rm -f $(OBJS) 
	rm -fr $(ODIR)

fclean: clean
	rm -f $(NAME)

norm:
	~/.norminette/norminette.rb $(SRC)

re: fclean all
