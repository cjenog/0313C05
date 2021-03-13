/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjenog <cjenog@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:43:41 by cjenog            #+#    #+#             */
/*   Updated: 2021/03/13 13:43:47 by cjenog           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int facto;

	facto = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		facto *= nb;
		nb--;
	}
	return (facto);
}
