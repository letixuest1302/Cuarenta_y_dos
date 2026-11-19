# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_water_reminder.py                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lesainz <lesainz@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/12 10:53:36 by lesainz           #+#    #+#              #
#    Updated: 2026/11/19 11:48:57 by lesainz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_water_reminder() -> None:
	moisture = int(input("Enter soil moisture level: "))
	if moisture < 30:
		print("Time to water the plants!")
	else:
		print("Soil moisture is sufficient.")