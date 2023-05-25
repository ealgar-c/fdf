/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:48:53 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/05/24 19:16:54 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"
# include <fcntl.h>

typedef struct s_mlxvars
{
	void	*mlx_ptr;
	void	*window_ptr;
}	t_mlxvars;

#endif