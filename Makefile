NAME = push_swap

SRCS = srcs/ft_error.c

all:
	make -C ./libft
	gcc push_swap.c ./libft/libft.a $(SRCS) -o push_swap

clean: 
	rm -rf *.o
	rm -rf ./libft/*.o ./libft/libft.a

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re

# ============================

# NAME = push_swap

# SRCS = push_swap.c

# BUILDDIR = ./build/
# LIBDIR = ./libft/
# LIBFT = ./libft/libft.a

# CC = gcc
# CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g3

# all: $(BUILDDIR) $(LIBFT) $(NAME)

# $(LIBFT):
# 	make -C $(LIBDIR)

# $(BUILDDIR):
# 	mkdir -p $(BUILDDIR)

# 	$(BUILDDIR)%.o:$(SRCDIR)%.c
# 	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

# $(NAME): $(BUILDOBJS)
# 	$(CC) $(CFLAGS) $(BUILDOBJS) $(LIBFT) -o $(NAME)

# clean:
# 	rm -rf $(BUILDDIR)
# 	make -C $(LIBDIR) clean

# fclean: clean
# 	rm -rf $(NAME)
# 	make -C $(LIBDIR) fclean

# re: fclean all

# .PHONY: all fclean clean re






# =======================================

# NAME = push_swap

# SRCDIR = ./srcs/
# SRCNAMES = push_swap.c

# INC = ./includes/
# BUILDDIR = ./build/
# BUILDDIR_BONUS = ./build_bonus/
# BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))
# BUILDOBJS_BONUS = $(addprefix $(BUILDDIR_BONUS), $(SRCNAMES_BONUS:.c=.o))
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# LIBDIR = ./libft/
# LIBFT = ./libft/libft.a
# LIBINC = ./libft/

# CC = gcc
# CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g3

# DEBUG = -g

# all: $(BUILDDIR) $(LIBFT) $(NAME)

# $(LIBFT):
# 	make -C $(LIBDIR)

# $(BUILDDIR):
# 	mkdir -p $(BUILDDIR)

# $(BUILDDIR_BONUS):
# 	mkdir -p $(BUILDDIR_BONUS)

# $(BUILDDIR)%.o:$(SRCDIR)%.c
# 	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

# $(BUILDDIR_BONUS)%.o:$(SRCDIR_BONUS)%.c
# 	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

# $(NAME): $(BUILDOBJS)
# 	$(CC) $(CFLAGS) $(BUILDOBJS) $(LIBFT) -o $(NAME)

# bonus: clean fclean $(BUILDDIR_BONUS) $(LIBFT) $(NAME_BONUS)

# clean:
# 	rm -rf $(BUILDDIR)
# 	rm -rf $(BUILDDIR_BONUS)
# 	make -C $(LIBDIR) clean

# fclean: clean
# 	rm -rf $(NAME)
# 	rm -rf $(NAME_BONUS)
# 	make -C $(LIBDIR) fclean

# re: fclean all

# .PHONY: all fclean clean re


# ====================


# NAME = cub3D
# NAME_BONUS = cub3D_bonus

# SRCDIR = ./srcs/
# SRCNAMES = ft_bitmap.c \
# 			ft_check_parse.c \
# 			ft_check_valid.c \
# 			ft_color.c \
# 			ft_dfs.c \
# 			ft_draw_wall.c \
# 			ft_draw_wall_with_tex.c \
# 			ft_error.c \
# 			ft_key.c \
# 			ft_key_exit.c \
# 			ft_main_loop.c \
# 			ft_map_to_int.c \
# 			ft_num_check.c \
# 			ft_parse_map.c \
# 			ft_parse_nswes.c \
# 			ft_parse_r.c \
# 			ft_parsing.c \
# 			ft_ready_to_dfs.c \
# 			ft_ready_to_parse.c \
# 			ft_resolution.c \
# 			ft_sprite.c \
# 			ft_sprite_count.c \
# 			ft_sprite_sort.c \
# 			ft_utils.c \
# 			cub3d.c

# SRCDIR_BONUS = ./bonus/
# SRCNAMES_BONUS = ft_bitmap_bonus.c \
# 			ft_check_parse_bonus.c \
# 			ft_check_valid_bonus.c \
# 			ft_color_bonus.c \
# 			ft_dfs_bonus.c \
# 			ft_draw_wall_bonus.c \
# 			ft_draw_wall_with_tex_bonus.c \
# 			ft_error_bonus.c \
# 			ft_key_bonus.c \
# 			ft_key_exit_bonus.c \
# 			ft_main_loop_bonus.c \
# 			ft_map_to_int_bonus.c \
# 			ft_num_check_bonus.c \
# 			ft_parse_map_bonus.c \
# 			ft_parse_nswes_bonus.c \
# 			ft_parse_r_bonus.c \
# 			ft_parsing_bonus.c \
# 			ft_ready_to_dfs_bonus.c \
# 			ft_ready_to_parse_bonus.c \
# 			ft_resolution_bonus.c \
# 			ft_sprite_bonus.c \
# 			ft_sprite_count_bonus.c \
# 			ft_sprite_sort_bonus.c \
# 			ft_utils_bonus.c \
# 			cub3d_bonus.c

# # SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
# # SRC_BONUS = $(addprefix $(SRCDIR_BONUS), $(SRCNAMES_BONUS))
# INC = ./includes/
# BUILDDIR = ./build/
# BUILDDIR_BONUS = ./build_bonus/
# BUILDOBJS = $(addprefix $(BUILDDIR), $(SRCNAMES:.c=.o))
# BUILDOBJS_BONUS = $(addprefix $(BUILDDIR_BONUS), $(SRCNAMES_BONUS:.c=.o))
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# LIBDIR = ./libft/
# LIBFT = ./libft/libft.a
# LIBINC = ./libft/

# MLX_DIR = ./mlx/
# MLX = -Lmlx -lmlx -framework OpenGL -framework AppKit #-fsanitize=address -g3

# CC = gcc
# CFLAGS = -Wall -Werror -Wextra

# DEBUG = -g

# all: $(BUILDDIR) $(LIBFT) $(NAME)

# $(LIBFT):
# 	make -C $(LIBDIR)

# $(BUILDDIR):
# 	mkdir -p $(BUILDDIR)

# $(BUILDDIR_BONUS):
# 	mkdir -p $(BUILDDIR_BONUS)

# $(BUILDDIR)%.o:$(SRCDIR)%.c
# 	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

# $(BUILDDIR_BONUS)%.o:$(SRCDIR_BONUS)%.c
# 	$(CC) $(CFLAGS) -I$(LIBINC) -I$(INC) -o $@ -c $<

# $(NAME): $(BUILDOBJS)
# 	make -C $(MLX_DIR)
# 	$(CC) $(CFLAGS) $(MLX) $(BUILDOBJS) $(LIBFT) -o $(NAME)

# $(NAME_BONUS): $(BUILDOBJS_BONUS)
# 	make -C $(MLX_DIR)
# 	$(CC) $(CFLAGS) $(MLX) $(BUILDOBJS_BONUS) $(LIBFT) -o $(NAME_BONUS)

# bonus: clean fclean $(BUILDDIR_BONUS) $(LIBFT) $(NAME_BONUS)

# clean:
# 	rm -rf $(BUILDDIR)
# 	rm -rf $(BUILDDIR_BONUS)
# 	make -C $(LIBDIR) clean
# 	make -C $(MLX_DIR) clean

# fclean: clean
# 	rm -rf $(NAME)
# 	rm -rf $(NAME_BONUS)
# 	make -C $(LIBDIR) fclean

# re: fclean all

# .PHONY: all fclean clean re