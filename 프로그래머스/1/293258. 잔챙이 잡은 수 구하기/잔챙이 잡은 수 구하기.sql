select
    count(*) AS FISH_COUNT
from FISH_INFO
where ifnull(LENGTH,10) <=10
