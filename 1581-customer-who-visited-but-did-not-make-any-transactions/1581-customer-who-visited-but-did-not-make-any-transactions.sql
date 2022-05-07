# select customer_id , count(*) as count_no_trans
# from Visits
# where visit_id  not in (select distinct visit_id  from transactions)
# group by customer_id 

SELECT
	customer_id,
	COUNT(Visits.visit_id) AS count_no_trans
FROM
	visits
LEFT JOIN Transactions
	ON Visits.visit_id = Transactions.visit_id
WHERE 
	Transactions.visit_id IS NULL
GROUP BY customer_id