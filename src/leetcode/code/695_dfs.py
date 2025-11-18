class Solution:
    def maxAreaOfIsland(self, M: List[List[int]]) -> int:
        m, n = len(M), len(M[0])
        offsets = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        area = 0

        def neighbors(y: int, x: int) -> Iterator[Tuple[int, int]]:
            for dy, dx in offsets:
                ny, nx = y + dy, x + dx
                if 0 <= ny < m and 0 <= nx < n and M[ny][nx] == 1:
                    yield [ny, nx]
        
        def dfs(i: int, j: int) -> None:
            M[i][j] = 0
            area = 1
            for ii, jj in neighbors(i, j):
                area += dfs(ii, jj)
            return area

        for i in range(m):
            for j in range(n):
                if M[i][j] == 1:
                    area = max(area, dfs(i, j))
        
        return area
