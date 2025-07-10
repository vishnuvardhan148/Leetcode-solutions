# Write your MySQL query statement below
SELECT project_id,ROUND(AVG(experience_years),2) as average_years FROM Project as p
RIGHT JOIN Employee as e
ON p.employee_id=e.employee_id GROUP BY project_id HAVING project_id is not null;