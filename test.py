from collections import deque

def min_moves(start, target, N):
    dx = [2, 2, -2, -2, 1, 1, -1, -1]
    dy = [1, -1, 1, -1, 2, -2, 2, -2]

    queue = deque([(start, 0)])
    visited = set()

    while queue:
        (x, y), d = queue.popleft()

        if (x, y) == target:
            return d

        for i in range(8):
            nx, ny = x + dx[i], y + dy[i]
            if 1 <= nx <= N and 1 <= ny <= N and (nx, ny) not in visited:
                queue.append(((nx, ny), d + 1))
                visited.add((nx, ny))

    return float('inf')

start = (1, 1)
target = (8, 8)
N = 8
print(min_moves(start, target, N))