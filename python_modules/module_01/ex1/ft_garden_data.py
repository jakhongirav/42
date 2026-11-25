class Plant:
    def __init__(self, name: str, height: int, age: int) -> None:
        self.name: str = name
        self.height: int = height
        self.age: int = age

    def show(self) -> None:
        print(f"{self.name.capitalize()}: {self.height}cm, {self.age} days old")


def ft_garden_data() -> None:
    print("=== Garden Plant Registry ===")
    rose: Plant = Plant("rose", 25, 30)
    rose.show()
    sunflower: Plant = Plant("sunflower", 80, 45)
    sunflower.show()
    cactus: Plant = Plant("cactus", 15, 120)
    cactus.show()


if __name__ == "__main__":
    ft_garden_data()
