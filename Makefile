NAME = libftprintf.a

FL = -Wall -Wextra -Werror

cc = cc

hd = ft_printf.h

fc = ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putnbrp.c \
	ft_puthex.c \
	ft_puthexupper.c \
	ft_printf.c \

obj = $(fc:.c=.o)

all: $(NAME) 

$(NAME): $(obj)
	ar -rc $(NAME) $(obj)

%.o : %.c $(hd)
	$(cc)  $(FL) -c $<

clean :
	rm -rf  $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all