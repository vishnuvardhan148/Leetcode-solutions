# Write your MySQL query statement below
    SELECT product_name,year,price FROM Sales as a
    INNER JOIN Product as b
    ON a.product_id=b.product_id;