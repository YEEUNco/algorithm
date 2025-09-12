-- 코드를 입력하세요
with yogurtMilk as(
    select CART_ID, NAME
    from CART_PRODUCTS
    where NAME IN ('Yogurt', 'Milk')
)
SELECT
    CART_ID
from yogurtMilk
group by CART_ID
having count(DISTINCT NAME)>=2
order by CART_ID