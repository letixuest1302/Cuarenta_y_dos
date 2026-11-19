# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_count_harvest_recursive.py                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lesainz <lesainz@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/12 10:54:54 by lesainz           #+#    #+#              #
#    Updated: 2026/11/19 11:51:42 by lesainz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def	ft_count_harvest_recursive() -> None:
	day = int(input("Days until harvest: "))
	
	def helper(current: int, target: int) -> int:
		if current > target:
			print("Harvest time!")
			return 0
		print(f"Day {current}")
		return helper(current + 1, target)
		
	helper(1, day)