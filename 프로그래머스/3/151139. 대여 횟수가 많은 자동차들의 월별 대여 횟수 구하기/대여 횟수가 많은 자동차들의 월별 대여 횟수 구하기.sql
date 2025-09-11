-- 코드를 입력하세요
with fil as (
    select 
        CAR_ID
    from CAR_RENTAL_COMPANY_RENTAL_HISTORY
    where START_DATE >= '2022-08-01' and START_DATE < '2022-11-01'
    group by CAR_ID
    having count(*)>=5
    
)
SELECT
    MONTH(h.START_DATE) as MONTH,
    h.CAR_ID,
    count(*) AS RECORDS
from CAR_RENTAL_COMPANY_RENTAL_HISTORY as h
JOIN fil f ON f.CAR_ID = h.CAR_ID
WHERE h.START_DATE >= '2022-08-01' AND h.START_DATE < '2022-11-01'
GROUP BY MONTH, h.CAR_ID
ORDER BY MONTH, h.CAR_ID DESC;