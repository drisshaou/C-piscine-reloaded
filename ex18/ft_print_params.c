/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:17:12 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/14 17:19:42 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			while (*av[i])
			{
				ft_putchar(av[i][0]);
				av[i]++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (1);
}
