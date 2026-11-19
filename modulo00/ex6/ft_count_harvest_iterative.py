# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_count_harvest_iterative.py                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lesainz <lesainz@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/12 10:54:22 by lesainz           #+#    #+#              #
#    Updated: 2026/11/19 11:40:02 by lesainz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def	ft_count_harvest_iterative() -> None:
	day = int(input("Days until harvest: "))
	for day in range(1, day + 1):
		print(f"Day {day}")
	print("Harvest time!")