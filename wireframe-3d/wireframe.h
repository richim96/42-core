/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wireframe.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmei <rmei@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:24:40 by rmei              #+#    #+#             */
/*   Updated: 2024/07/02 16:38:54 by rmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WIREFRAME_H
# define WIREFRAME_H

# include <fcntl.h>
# include <stdio.h>

# include "libft.h"
# include "mlx.h"

/* STRUCTURES */
typedef struct s_img
{
	void	*img_ptr;
	char	*img_addr;
	int		bits_per_pixel;
	int		size_line;
	int		endian;
}	t_img;

/* FUNCTIONS  */
int		ft_isnumstr(char *s);
void	ft_map_draw(char *map);

#endif