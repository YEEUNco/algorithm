-- 코드를 입력하세요
with fil as(
    select FOOD_TYPE, max(FAVORITES) as FAV
    from REST_INFO
    group by FOOD_TYPE
)
SELECT
    i.FOOD_TYPE,
    i.REST_ID,
    i.REST_NAME,
    i.FAVORITES
from REST_INFO as i
join fil
    on i.FAVORITES = fil.FAV
where i.FOOD_TYPE = fil.FOOD_TYPE and i.FAVORITES = fil.FAV
order by i.FOOD_TYPE DESC