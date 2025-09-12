-- 코드를 입력하세요
SELECT
    i.ANIMAL_ID,
    i.ANIMAL_TYPE,
    i.NAME
from ANIMAL_INS as i
join ANIMAL_OUTS as o
    on i.ANIMAL_ID = o.ANIMAL_ID
where i.SEX_UPON_INTAKE LIKE '%Intact%' and (o.SEX_UPON_OUTCOME LIKE '%Spayed%' or o.SEX_UPON_OUTCOME LIKE '%Neutered%')