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


def ft_garden_security() -> None:
    print("=== Garden Security System ===")
    plant: Plant = Plant("rose", 15.0, 10)
    print("Plant created: ", end="")
    plant.show()
    plant.set_height(17.0)
    plant.set_age(12)
    print()

    plant.set_height(-0.1)
    plant.set_age(-1)

    print("\nCurrent State: ", end="")
    plant.show()


if __name__ == "__main__":
    ft_garden_security()
