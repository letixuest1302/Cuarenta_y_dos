def ft_water_reminder() -> None:
    moisture = int(input("Enter soil moisture level: "))
    if moisture < 30:
        print("Time to water the plants!")
    else:
        print("Soil moisture is sufficient.")