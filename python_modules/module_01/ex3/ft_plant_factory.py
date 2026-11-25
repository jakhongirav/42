class Plant:
    def __init__(
        self, name: str, height: float, days: int, growth_rate: float = 0.8
    ) -> None:
        self.name: str = name
        self.height: float = height
        self.growth_rate: float = growth_rate
        self.days: int = days

    def show(self) -> None:
        print(f"{self.name.capitalize()}: {self.height}cm, {self.days} days old")

    def grow(self) -> None:
        self.height = round(self.height + self.growth_rate, 1)

    def age(self) -> None:
        self.days += 1


def ft_plant_factory() -> None:
    print("=== Plant Factory Output ===")
    plant_specs: list[tuple[str, float, int]] = [
        ("rose", 25.0, 30),
        ("oak", 200.0, 365),
        ("cactus", 5.0, 90),
        ("sunflower", 80.0, 45),
        ("fern", 15.0, 120),
    ]
    for name, height, days in plant_specs:
        plant: Plant = Plant(name, height, days)
        print("Created: ", end="")
        plant.show()


if __name__ == "__main__":
    ft_plant_factory()
