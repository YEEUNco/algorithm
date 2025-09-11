select
    YEAR(DIFFERENTIATION_DATE) as year,
    MAX(SIZE_OF_COLONY) over(partition by year(DIFFERENTIATION_DATE)) - SIZE_OF_COLONY as year_dev,
    ID
from ECOLI_DATA
order by YEAR, YEAR_DEV, ID
    