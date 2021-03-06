/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 12:46:24 by skuntoji          #+#    #+#             */
/*   Updated: 2018/06/23 13:08:26 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int hnb;

	i = 0;
	hnb = nb / 2;
	if (nb == 1)
		return (1);
	while (i <= hnb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
