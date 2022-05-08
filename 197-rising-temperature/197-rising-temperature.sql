# select weather.id as 'Id'
# from weather join weather w 
# on DATEDIFF(weather.recordDate, w.recordDate) = 1
# and weather.Temperature  > w.Temperature;

SELECT a.Id
FROM Weather a join Weather b
WHERE a.Temperature > b.Temperature
AND DATEDIFF(a.Recorddate,b.Recorddate) = 1