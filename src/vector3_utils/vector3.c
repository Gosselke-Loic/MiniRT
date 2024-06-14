/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:44:42 by scherty           #+#    #+#             */
/*   Updated: 2024/06/07 14:30:35 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_vector3	ft_vec3_new(const double x, const double y, const double z)
{
	t_vector3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

void	ft_vec3_print(const t_vector3 v, const char *name)
{
	printf("Vector3 %s(x:%lf, y:%lf, z:%lf)\n", name, v.x, v.y, v.z);
}

int	ft_vec3_near_zero(const t_vector3 v)
{
	double	s;

	s = 1e-8;
	return ((fabs(v.x) < s) && (fabs(v.y) < s) && (fabs(v.z) < s));
}
