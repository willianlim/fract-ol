# ifndef FT_FRACTOL_H
# define FT_FRACTOL_H

#include "ft_fractol_struct.h"
#include "../libft/libft.h"

void	ft_map(t_data *data);
void	ft_cal_loop(t_data *data);
void	ft_picture(t_data *data, const char *argv[]);
void	ft_mandelbrot(t_data *data);
int		ft_mouse_hook(int key, int x, int y, t_data *data);
int		ft_key_hook(int key, t_data *data);
void	init(t_data *data);

# endif