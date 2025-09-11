select
    count(*) AS FISH_COUNT,
    n.FISH_NAME
from FISH_INFO as f
join FISH_NAME_INFO as n
    on f.FISH_TYPE = n.FISH_TYPE
group by f.FISH_TYPE, n.FISH_NAME
order by FISH_COUNT DESC
