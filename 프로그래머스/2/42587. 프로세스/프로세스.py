from collections import deque
import heapq

def solution(priorities, location):
    q = deque()
    maxheap = []
    for i in range(len(priorities)):
        p = priorities[i]
        q.append((i,p))
        heapq.heappush(maxheap, -p)
    
    #heapq.heapify(maxheap)
    
    order = 0
    while q:
        i, p = q.popleft()
        if p < -maxheap[0]:
            q.append((i,p))
        else:
            order+=1
            heapq.heappop(maxheap)
            if i==location:
                return order
    
    answer = 0
    return answer