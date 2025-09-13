-- 코드를 작성해주세요
select
    c3.ID
from ECOLI_DATA as c1
JOIN ECOLI_DATA as c2 
    on c2.PARENT_ID = c1.ID
JOIN ECOLI_DATA as c3
    on c3.PARENT_ID = c2.ID
where c1.PARENT_ID is null
order by c3.ID