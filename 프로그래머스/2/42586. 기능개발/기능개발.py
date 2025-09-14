def solution(progresses, speeds):
    answer = []
    beforeTaken = 0
    cnt = 0
    for i in range(len(progresses)):
        Taken=0
        
        if  (100-progresses[i])%speeds[i]!=0:
            Taken = (100-progresses[i])//speeds[i]+1
        else:
            Taken = (100-progresses[i])//speeds[i]
        
            
        if i==0:
            beforeTaken = Taken

        
        if beforeTaken >= Taken:
            cnt+=1
        elif beforeTaken < Taken or i==len(progresses)-1:
            answer.append(cnt)
            beforeTaken = Taken
            cnt=1
            
        if i==len(progresses)-1:
            answer.append(cnt)

    return answer