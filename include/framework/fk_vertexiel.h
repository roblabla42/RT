/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fk_vertexiel.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 21:18:55 by mbarbari          #+#    #+#             */
/*   Updated: 2015/11/25 17:30:07 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FK_VERTEXIEL_H
# define FK_VERTEXIEL_H

# include "framework/fk_vectoriel.h"

t_vertex3		vertex_new(float x1, float y1, float z1);
t_vertex3		vertex_sum(t_vertex3 u, unsigned int magnitude);
unsigned int	lenght_segment(t_vertex3 u, t_vertex3 v);
t_vertex3		vertex_ofvector3(t_vector3 v);

#endif
