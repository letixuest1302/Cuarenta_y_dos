def	ft_count_harvest_recursive() -> None:
    day = int(input("Days until harvest: "))
	
	def helper(current: int, target: int) -> int:
        if current > target:
            print("Harvest time!")
            return 0
        print(f"Day {current}")
        return helper(current + 1, target)
		
    helper(1, day)