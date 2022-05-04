# Write your MySQL query statement below
Update salary
SET
     sex = case sex
        when 'm' then 'f'
        else'm'
    end;