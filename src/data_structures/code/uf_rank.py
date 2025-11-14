class UnionFind:
    def __init__(self, size: int) -> None:
        self.root = list(range(size))
        self.rank = [1] * size

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
            if self.rank[rx] < self.rank[ry]:
                self.root[rx] = ry
            elif self.rank[rx] > self.rank[ry]:
                self.root[ry] = rx
            else:
                self.root[ry] = rx
                self.rank[rx] += 1
            return True
        return False
