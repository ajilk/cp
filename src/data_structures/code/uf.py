class UnionFind:
    def __init__(self, size: int) -> None:
        self.root = list(range(size))

    def find(self, x: int) -> int:
        rx = self.root[x]
        if rx != x:
            rx = self.find(rx)
            self.root[x] = rx
        return rx

    def union(self, x: int, y: int) -> bool:
        rx = self.find(x)
        ry = self.find(y)
        if rx != ry:
            self.root[rx] = ry
            return True
        return False
