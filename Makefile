# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 11:43:03 by mapoirie          #+#    #+#              #
#    Updated: 2023/05/15 18:48:38 by mapoirie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# noms des variables	
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f
SRC = ft_atoi.c \
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strchr.c\
ft_strdup.c\
ft_striteri.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strmapi.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c\

OBJ = $(SRC:.c=.o)
# tout ce qu'il y a dans SRC va être égal à .o

SRC_BONUS = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c\

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 
#   $(CC) $(CFLAGS) -c $(SRC)
# veut dire : gcc -Wall -Wextra -Werror -o main.o -c main.c

$(NAME): $(OBJ)
	ar rcs $@ $^
#$(NAME) : $(NAME) $(OBJ)
#	ar cr $(NAME) $(OBJ)
#     NAME OBJ

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)
# efface tous les .o cad les fichiers intermediaires	

fclean:
	$(RM) $(NAME)
# efface libft.a (permet un reconstruction complète?)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJ_BONUS)

.PHONY: all clean fclean re bonus

# cible : dependance
#	commandess

#	$@ 	représente la liste des cibles
#	$ˆ 	représente la liste des dépendances
#	$< 	représente le nom du fichier sans suffixe/ première dépendance 
#	$* 	représente la liste des dépendances
#	$? 	représente la liste des dépendances plus récentes que la cible

# $(NAME), all, clean, fclean et re 