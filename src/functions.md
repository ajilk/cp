# Useful Functions

## `isslice(iterator, start, end)`
to slice iterators  
```python
def values(n: int) -> Iterator[int]:
    for i in range(n):
        yield i
  
islice(values(100), 20, 31) # -> [20, 21, 22, ..., 30]
```
