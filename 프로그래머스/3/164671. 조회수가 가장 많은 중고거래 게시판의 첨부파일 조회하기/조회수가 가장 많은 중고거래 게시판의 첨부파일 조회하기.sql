with viewmax as(
    select max(VIEWS) as vm
    from USED_GOODS_BOARD
)
select
    CONCAT('/home/grep/src/', B.BOARD_ID, '/', F.FILE_ID, F.FILE_NAME, F.FILE_EXT) AS FILE_PATH
from USED_GOODS_BOARD as B
join viewmax as v
    on B.VIEWS = v.vm
join USED_GOODS_FILE as F
    on B.BOARD_ID = F.BOARD_ID
ORDER BY F.FILE_ID DESC;
