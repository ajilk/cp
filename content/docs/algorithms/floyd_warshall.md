---
title: Floyd-Warshall Algorithm
---

Finds the shortest path distances between all pairs of vertices in a weighted graph by considering all possible intermediate vertices.

```python
def floyd_warshall(edges: list[tuple[str, str, float]]) -> defaultdict[str, defaultdict[str, float]]:
    G = defaultdict(lambda: defaultdict(lambda: inf))
    
    for a, b, w in edges:
        G[a][b] = w
    
    vertices = set()
    for a, b, _ in edges:
        vertices.add(a)
        vertices.add(b)
        G[a][a] = 0
        G[b][b] = 0
    
    for k in vertices:
        for i in vertices:
            for j in vertices:
                G[i][j] = min(G[i][j], G[i][k] + G[k][j])
    
    return G
```

#### Related Problems
- [399. Evaluate Division](../leetcode/graph/399.md)
