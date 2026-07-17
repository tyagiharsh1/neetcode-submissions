with ranked as (
    select *,ROW_NUMBER() OVER (PARTITION BY student_id order by score desc,exam_id asc)as rn from exam_results

)
SELECT student_id, exam_id, score
FROM ranked
WHERE rn = 1
ORDER BY student_id;