SELECT
product_id,
store,
price
FROM Products
UNPIVOT
(
price
FOR store in (store1,store2,store3)
) AS tmp