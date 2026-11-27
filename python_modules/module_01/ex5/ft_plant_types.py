class Plant:
    def __init__(
        self, name: str, height: float, days: int, growth_rate: float = 0.8
    ) -> None:
        self.name: str = name
        self._height: float = 0.0
        self._days: int = 0
        self._growth_rate: float = growth_rate
        if height < 0:
            print(f"{self.name.capitalize()}: Error, height can't be negative")
        else:
            self._height = height
        if days < 0:
            print(f"{self.name.capitalize()}: Error, age can't be negative")
        else:
            self._days = days

    def show(self) -> None:
        print(f"{self.name.capitalize()}: {self._height}cm, {self._days} days old")

    def grow(self) -> None:
        self._height = round(self._height + self._growth_rate, 1)

    def age(self) -> None:
        self._days += 1

    def get_height(self) -> float:
        return self._height

    def set_height(self, new_height: float) -> None:
        if new_height < 0.0:
            print(f"{self.name.capitalize()}: Error, height can't be negative")
            print("Height update rejected")
            return
        self._height = new_height
        print(f"Height updated: {self._height}cm")

    def get_age(self) -> int:
        return self._days

    def set_age(self, new_days: int) -> None:
        if new_days < 0:
            print(f"{self.name.capitalize()}: Error, age can't be negative")
            print("Age update rejected")
            return
        self._days = new_days
        print(f"Age updated: {self._days} days")


class Flower(Plant):
    def __init__(
        self,
        name: str,
        height: float,
        days: int,
        color: str,
        growth_rate: float = 1.8,
        is_blooming: bool = False,
    ) -> None:
        super().__init__(name, height, days, growth_rate)
        self._color: str = color
        self.is_blooming: bool = is_blooming

    def show(self) -> None:
        super().show()
        print(f" Color: {self._color}")
        if self.is_blooming:
            print(f" {self.name.capitalize()} is blooming beautifully!")
        else:
            print(f" {self.name.capitalize()} has not bloomed yet")

    def bloom(self) -> None:
        self.is_blooming = True


class Tree(Plant):
    def __init__(
        self,
        name: str,
        height: float,
        days: int,
        trunk_diameter: float,
        growth_rate: float = 0.8,
    ) -> None:
        super().__init__(name, height, days, growth_rate)
        self._trunk_diameter: float = 0.0
        if trunk_diameter < 0:
            print("Error, trunk_diameter can't be negative")
        else:
            self._trunk_diameter = trunk_diameter

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self._trunk_diameter}cm")

    def produce_shade(self) -> None:
        print(
            f"Tree {self.name.capitalize()} now produces a shade of {self._height}cm long and {self._trunk_diameter}cm wide."
        )


class Vegetable(Plant):
    def __init__(
        self,
        name: str,
        height: float,
        days: int,
        harvest_season: str,
        growth_rate: float = 2.1,
    ) -> None:
        super().__init__(name, height, days, growth_rate)
        self.harvest_season: str = harvest_season
        self.nutritional_value: int = 0

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self.harvest_season}")
        print(f" Nutritional value: {self.nutritional_value}")

    def grow(self, days: int = 1) -> None:
        self._height = round(self._height + (self._growth_rate * days), 1)

    def age(self, days: int = 1) -> None:
        self._days += days
        self.nutritional_value += days
        self.grow(days)


def ft_plant_types() -> None:
    print("=== Garden Plant Types ===")
    print("=== Flower")
    flower: Flower = Flower("Rose", 15.0, 10, "red")
    flower.show()
    print("[asking the rose to bloom]")
    flower.bloom()
    flower.show()

    print("=== Tree")
    tree: Tree = Tree("Oak", 200.0, 365, 5.0)
    tree.show()
    print("[asking the oak to produce shade]")
    tree.produce_shade()

    print("=== Vegetable")
    vegetable: Vegetable = Vegetable("Tomato", 5.0, 10, "April")
    vegetable.show()
    print("[make tomato grow and age for 20 days]")
    vegetable.age(20)
    vegetable.show()


if __name__ == "__main__":
    ft_plant_types()
