select
    ID,
    CASE NTILE(4) over (ORDER BY SIZE_OF_COLONY DESC)
        WHEN 1 THEN 'CRITICAL'
        when 2 THEN 'HIGH'
        when 3 THEN 'MEDIUM'
        else 'LOW'
    END as COLONY_NAME
from ECOLI_DATA
order by ID