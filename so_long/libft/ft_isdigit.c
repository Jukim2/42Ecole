/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim2 <jukim2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:25:15 by jukim2            #+#    #+#             */
/*   Updated: 2022/11/09 13:13:42 by jukim2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int s)
{
	if ('0' <= s && s <= '9')
		return (1);
	return (0);
}