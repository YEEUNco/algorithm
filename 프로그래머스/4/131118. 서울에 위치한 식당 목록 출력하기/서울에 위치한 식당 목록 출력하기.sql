-- 코드를 입력하세요
SELECT
    i.REST_ID,
    i.REST_NAME,
    i.FOOD_TYPE,
    i.FAVORITES,
    i.ADDRESS,
    round(AVG(r.REVIEW_SCORE),2) AS SCORE
from REST_INFO as i
join REST_REVIEW as r
    on i.REST_ID = r.REST_ID
where i.ADDRESS LIKE '서울%'
group by i.REST_ID,
    i.REST_NAME,
    i.FOOD_TYPE,
    i.FAVORITES,
    i.ADDRESS
order by SCORE DESC, i.FAVORITES DESC
