-- Lists desc. order scores in `second_table`, + counts for each as `number`.
SELECT `score`, COUNT(*) AS `number`
FROM `second_table`
GROUP BY `score`
ORDER BY `number` DESC;
