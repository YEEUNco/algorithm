def solution(array, commands):
     
    answer = []
    for arr in commands:
        i = arr[0]
        j = arr[1]
        k = arr[2]
        temp = []
        for a in range(i,j+1):
            temp.append(array[a-1])
        temp.sort()
        answer.append(temp[k-1])
            
    return answer