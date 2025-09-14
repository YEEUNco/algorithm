from collections import deque

def solution(maps):
    n, m = len(maps), len(maps[0])
    dis = []
    for _ in range(n):
        row = [-1]*m
        dis.append(row)
    
    dy = (1,0,-1,0)
    dx = (0,1,0,-1)
    
    q = deque()
    if maps[0][0] ==1:
        q.append((0,0))
        dis[0][0] = 1
    
    while q:
        y, x = q.popleft()
        if y==n-1 and x == m-1:
            return dis[y][x]
        for d in range(4):
            ny = y+dy[d]
            nx = x+dx[d]
            
            if ny>= 0 and ny < n and nx>=0 and nx<m and maps[ny][nx]==1 and dis[ny][nx] == -1 :
                dis[ny][nx] = dis[y][x]+1
                q.append((ny,nx))

    return -1