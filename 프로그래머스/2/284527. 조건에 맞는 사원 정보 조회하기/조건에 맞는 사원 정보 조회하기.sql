select
    sum(g.SCORE) AS SCORE,
    e.EMP_NO,
    e.EMP_NAME,
    e.POSITION,
    e.EMAIL
from HR_EMPLOYEES as e
join HR_DEPARTMENT as d
    on e.DEPT_ID = d.DEPT_ID
join HR_GRADE as g
    on (e.EMP_NO = g.EMP_NO)
where g.YEAR = 2022
group by 
    e.EMP_NO,
    e.EMP_NAME,
    e.POSITION,
    e.EMAIL
order by SCORE DESC
limit 1
