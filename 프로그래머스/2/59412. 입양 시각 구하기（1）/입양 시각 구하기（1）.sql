-- 코드를 입력하세요
SELECT
    hour(DATETIME) as HOUR,
    count(*)
from ANIMAL_OUTS
where hour(DATETIME)>=9 and hour(DATETIME)<=19
group by HOUR
order by HOUR