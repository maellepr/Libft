# noms des variables	
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c 
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c 
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c 
ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)
# tout ce qu'il y a dans SRC va être égal à .o


%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<
# veut dire : gcc -Wall -Wextra -Werror -o main.o -c main.c

$(NAME) : $(OBJ)
	ar rcs $@ $^
#     NAME OBJ

all : $(NAME)
	
clean :
	$(RM) $(OBJ)
# efface tous les .o cad les fichiers intermediaires	

fclean :
	$(RM) $(NAME)
# efface libft.a (permet un reconstruction complète?)

re: fclean all
	
#.PHONY: clean clean


# cible : dependance
#	commandes

#	$@ 	représente la liste des cibles
#	$ˆ 	représente la liste des dépendances
#	$< 	représente le nom du fichier sans suffixe/ première dépendance 
#	$* 	représente la liste des dépendances
#	$? 	représente la liste des dépendances plus récentes que la cible

# $(NAME), all, clean, fclean et re 