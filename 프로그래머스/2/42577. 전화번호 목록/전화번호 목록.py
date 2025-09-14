def solution(phone_book):
    s = set(phone_book)
    for i in s:
        for k in range(1,len(i)):
            if i[:k] in s:
                return False
    return True