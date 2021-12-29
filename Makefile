NAME 	= libftprintf.a

SRCS	= ft_parse_flags.c \
	  ft_c_spec.c \
	  ft_s_spec.c \
	  ft_d_i_spec.c \
	  ft_x_X_spec.c \
	  ft_u_spec.c \
	  ft_p_spec.c \
	  ft_base_converter.c \
	  ft_printf.c \
	  ft_parse_spec.c \
	  ft_printf_utils.c

CC 	= gcc

CFLAGS 	= -Wall -Wextra -Werror

AR 		= ar rc
RM		= rm -f

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o: 	%.c ft_printf.h Makefile
	@$(CC) $(CFLAGS) -c $< -o $@ 

bonus: $(NAME)


clean:
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME) 

re: 	fclean all

