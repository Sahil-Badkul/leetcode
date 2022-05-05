to_upper() X --> upper
to_lower() X --> lower
substring() --> substr(a, index, length)
concat
SELECT Users.user_id , CONCAT(UPPER(SUBSTR(Users.name,1,1)),LOWER(SUBSTR(Users.name,2))) AS name
FROM Users
ORDER BY
Users.user_id ASC