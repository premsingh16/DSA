-- always we use group by with aggrigate functions 
SELECT v. customer_id AS customer_id , COUNT(customer_id) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id = t.visit_id
WHERE t.transaction_id is NULL
GROUP BY customer_id