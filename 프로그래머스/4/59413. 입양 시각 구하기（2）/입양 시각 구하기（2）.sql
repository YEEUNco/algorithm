with recursive hours as (
    select 0 AS HOUR
    UNION ALL
    select HOUR+1 from hours where hour<23
),
cnt as(
    select hour(DATETIME) as HOUR, COUNT(*) AS CNT
    from ANIMAL_OUTS
    group by hour(DATETIME)
)
select 
    h.HOUR,
    COALESCE(c.CNT,0) AS COUNT
from hours h
left join cnt c on h.HOUR = c.HOUR
order by h.HOUR