def solution(n, lost, reserve):
    fl = set(lost) - set(reserve)
    fr = set(reserve) - set(lost)
    for i in sorted(fr):
        if i-1 in fl: 
            fl.remove(i-1)
        elif i+1 in fl : 
            fl.remove(i+1)
    return n-len(fl)