def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    if unit == "packets":
        res = f"{seed_type.capitalize()} seeds: {quantity} available"
    elif unit == "grams":
        res = f"{seed_type.capitalize()} seeds: {quantity} total"
    elif unit == "area":
        res = f"{seed_type.capitalize()} seeds: covers {quantity} square meters"
    else:
        res = "Unknown unit type"

    print(f"{res}")
