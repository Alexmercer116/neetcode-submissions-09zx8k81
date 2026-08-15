-- Write your query below
SELECT name
FROM customers cust FULL OUTER JOIN orders ord
ON cust.id = ord.customer_id
WHERE ord.customer_id is NULL