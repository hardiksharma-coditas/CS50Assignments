-- 1 
SELECT name FROM songs;
-- 2
SELECT name FROM sons ORDER BY tempo ASC;
-- 3
SELECT name FROM songs ORDER BY length DESC LIMIT 5;
-- 4
SELECT name FROM songs WHERE danceability>0.75 AND energy>0.75 AND valence>0.75
-- 5
SELECT AVG(energy) AS avg_energy FROM songs;
--6
SELECT name FROM songs WHERE singer='POST MALONE'
--7
SELECT AVG(energy) AS avg_energy FROM songs WHERE SINGER='DRAKE'
--8
SELECT name FROM songs WHERE name LIKE '%feat%'

