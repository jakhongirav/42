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


def ft_plant_growth() -> None:
    print("=== Garden Plant Growth ===")
    rose: Plant = Plant("rose", 25.0, 30)
    start_height: float = rose.height
    rose.show()
    for i in range(7):
        rose.grow()
        rose.age()
        print(f"=== Day {i + 1} ===")
        rose.show()
    print(f"Growth this week: {round(rose.height - start_height, 1)}cm")


if __name__ == "__main__":
    ft_plant_growth()
