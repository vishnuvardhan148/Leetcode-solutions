# Write your MySQL query statement below
select x,y,z ,case when x+y>z and x+z>y and z+y>x then 'Yes' else 'No' end as triangle from triangle;