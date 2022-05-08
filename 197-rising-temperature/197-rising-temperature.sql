select weather.id as 'Id'
from weather join weather w 
on DATEDIFF(weather.recordDate, w.recordDate) = 1
and weather.Temperature  > w.Temperature;