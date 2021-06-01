MAKE_FOLDER = ../

NAME_TESTER_LIBFT = tester_libft.c
NAME_TESTER_LIBFT_BONUS = tester_libft_bonus.c
LIB_PATH = -L../ -lft

NAME_MANDATORY = run
NAME_MANDATORY_NULL = runn
NAME_MANDATORY_VALGRIND = runv
NAME_MANDATORY_VALGRIND_NULL = runvn


NAME_BONUS = runb
NAME_BONUS_VALGRIND = runbv

FLAGS = -Wall -Werror -Wextra

all: $(NAME_MANDATORY)

$(NAME_MANDATORY): makelib
	gcc $(FLAGS) $(NAME_TESTER_LIBFT) $(LIB_PATH) -o libft_test
	./libft_test
	rm -rf libft_test

$(NAME_MANDATORY_NULL): makelib
	gcc $(FLAGS) $(NAME_TESTER_LIBFT) $(LIB_PATH) -o libft_test
	./libft_test include_NULL
	rm -rf libft_test

$(NAME_MANDATORY_VALGRIND): makelib
	gcc $(FLAGS) -O0 $(NAME_TESTER_LIBFT) $(LIB_PATH) -o libft_test_valgrind
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./libft_test_valgrind 
	rm -rf libft_test_valgrind

$(NAME_MANDATORY_VALGRIND_NULL): makelib
	gcc $(FLAGS) -O0 $(NAME_TESTER_LIBFT) $(LIB_PATH) -o libft_test_valgrind
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./libft_test_valgrind include_NULL
	rm -rf libft_test_valgrind

$(NAME_BONUS): makelib_bonus
	gcc $(FLAGS) $(NAME_TESTER_LIBFT_BONUS) $(LIB_PATH) -o libft_test_bonus
	./libft_test_bonus
	rm -rf libft_test_bonus
	
$(NAME_BONUS_VALGRIND): makelib_bonus
	gcc $(FLAGS) -O0 $(NAME_TESTER_LIBFT_BONUS) $(LIB_PATH) -o libft_test_bonus
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./libft_test_bonus exclude_delone
	rm -rf libft_test_bonus

makelib:
	make re -C $(MAKE_FOLDER)

makelib_bonus: makelib
	make bonus -C $(MAKE_FOLDER)

help:
	@echo
	@echo -e '\t''\t''\t'MAKEFILE README
	@echo
	@echo -e '\t'run '\t'mandatory part without NULL and valgrind 
	@echo -e '\t'runn '\t'mandatory part with NULL and without valgrind -O0
	@echo -e '\t'runv '\t'mandatory part without NULL but valgrind -O0
	@echo -e '\t'runvn '\t'mandatory part with NULL and valgrind -O0
	@echo
	@echo -e '\t'runb '\t'bonus part without valgrind 
	@echo -e '\t'runbv '\t'bonus part with valgrind excluding ft_delone -O0
	@echo
	@echo