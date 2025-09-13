-- 코드를 입력하세요
with fil as(
    select 
        distinct 
            USER_ID,
            year(SALES_DATE) as YEAR,
            month(SALES_DATE) as MONTH
    from ONLINE_SALE
)
SELECT
    f.YEAR,
    f.MONTH,
    u.GENDER,
    count(*) AS USERS
from fil as f
join USER_INFO as u
    on u.USER_ID = f.USER_ID
where u.GENDER is not null 
group by f.YEAR, f.MONTH, u.GENDER
order by f.YEAR, f.MONTH, u.GENDER