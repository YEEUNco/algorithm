# -- 코드를 입력하세요
# with bestReviewer as(
#     select 
#         REST_ID,
#         MEMBER_ID,
#         REVIEW_TEXT,
#         REVIEW_DATE,
#         count(*) AS review_count
#     from REST_REVIEW
#     group by MEMBER_ID
#     order by review_count DESC
#     limit 1
# )
# SELECT
#     p.MEMBER_NAME,
#     b.REVIEW_TEXT,
#     date_format(b.REVIEW_DATE, '%Y-%m-%d') as REVIEW_DATE
# from bestReviewer as b
# join MEMBER_PROFILE as p
#     on b.MEMBER_ID = p.MEMBER_ID

WITH cnt AS (
  SELECT MEMBER_ID, COUNT(*) AS c
  FROM REST_REVIEW
  GROUP BY MEMBER_ID
),
topper AS (
  SELECT MEMBER_ID
  FROM cnt
  WHERE c = (SELECT MAX(c) FROM cnt)   -- 최다 리뷰 수인 회원 모두
)
SELECT
  p.MEMBER_NAME,
  r.REVIEW_TEXT,
  DATE_FORMAT(r.REVIEW_DATE, '%Y-%m-%d') AS REVIEW_DATE
FROM topper t
JOIN REST_REVIEW r ON r.MEMBER_ID = t.MEMBER_ID
JOIN MEMBER_PROFILE p ON p.MEMBER_ID = r.MEMBER_ID
ORDER BY r.REVIEW_DATE ASC, r.REVIEW_TEXT ASC;
