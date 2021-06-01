# 42_libft_Tobi-tester
The famous Tobi-tester from our Core @ Wolfsburg 2021


# Whats it does
There are great testers outside on GitHub but this tester can also test NULL pointers as arguments. Moulinette won't check for it but it's always good to protect yourself against it. It won't check for Norminette


# How it works
  1. clone this repo into a subfolder in your libft
  2. change path for your make in tester makefile
  3. run "make help" to see available commands
  4. Run different tests depending on what you want to test (NULL ptrs, valgrind)
  5. The makefile will use make re on your Makefile and add bonus if you run it on bonus tasks
 
 
# additional Info
  Compilation is done with gcc and all flags. It will turn off optimization for valgrind and enable all traces for valgrind to see the source of your mem leak.


# Issues
  1. ft_lstmap not covered
  2. ft_lstdelone excluded from valgrind tests (will cuase mem leaks)
  3. all print functions have to be checked manually (write it to a file and diff it)
