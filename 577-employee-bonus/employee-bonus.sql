# Write your MySQL query statement below
SELECT name ,bonus  FROM Employee as e
LEFT JOIN Bonus as b
ON e.empId=b.empId where bonus<1000 OR bonus is null;