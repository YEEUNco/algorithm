-- 코드를 입력하세요
with fil AS(
    select CATEGORY, MAX(PRICE) AS max_price
    from FOOD_PRODUCT
    where CATEGORY IN ('과자', '국', '김치', '식용유')
    group by CATEGORY
)
select 
    p.CATEGORY,
    p.PRICE,
    p.PRODUCT_NAME
from FOOD_PRODUCT as p
JOIN fil as f
    on p.CATEGORY = f.CATEGORY and p.PRICE = f.max_price
order by p.PRICE DESC